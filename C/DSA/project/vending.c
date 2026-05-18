#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 10
#define MAX_MEDICINE_ITEMS 5
#define MAX_CART_ITEMS 10

// Structure to store grocery item details
typedef struct {
    int id;
    char name[50];
    float price;
} GroceryItem;

// Structure to store user information
typedef struct {
    int studentId;
    char name[50];
    char idCard[20];
} User;

// Structure to store feedback
typedef struct {
    int studentId;
    char feedback[200];
} Feedback;

// Structure to store user's cart (items they added to the cart)
typedef struct {
    int itemId;
    int quantity;
} CartItem;

// Global arrays to store grocery items, medicine items, and feedback
GroceryItem groceryItems[MAX_ITEMS] = {
    {1, "Milk", 1.50},
    {2, "Bread", 1.00},
    {3, "Eggs", 2.00},
    {4, "Rice", 3.50},
    {5, "Apple", 2.30},
    {6, "Banana", 1.20},
    {7, "Cheese", 4.00},
    {8, "Tomato", 1.80},
    {9, "Potato", 1.00},
    {10, "Carrot", 2.50}
};

GroceryItem medicineItems[MAX_MEDICINE_ITEMS] = {
    {11, "Paracetamol", 3.00},
    {12, "Cough Syrup", 5.00},
    {13, "Antibiotics", 7.50},
    {14, "Pain Relief Cream", 4.20},
    {15, "Vitamins", 8.00}
};

Feedback feedbacks[MAX_ITEMS];
int feedbackCount = 0;

// Dynamic memory allocation for storing users
User *users = NULL;
int userCount = 0;  // Keeps track of number of users
int usersCapacity = 0; // Current capacity of users array

// Global cart (stores the cart for each user)
CartItem **cart;  // Cart for each user (dynamic)
int *cartItemCount;  // Cart item count for each user

void registerUser();
void viewItems();
void viewMedicines();
void addItemToCart(int userId, int itemType);
void viewCart(int userId);
void purchaseItem(int userId);
void giveFeedback(int userId);
void showFeedback();
void pay(int userId);
float calculateTotal(int userId);

void expandUserArray();
void expandCartArray(int userId);

int main() {
    // Initially allocate memory for users and carts
    expandUserArray();
    cart = (CartItem **)malloc(sizeof(CartItem *));
    cartItemCount = (int *)malloc(sizeof(int));

    int choice, userId;
    while (1) {
        printf("\n--- Grocery Store App ---\n");
        printf("1. Register\n");
        printf("2. View Grocery Items\n");
        printf("3. View Special Medicine Items\n");
        printf("4. Add Item to Cart\n");
        printf("5. View Cart\n");
        printf("6. Purchase Item\n");
        printf("7. Give Feedback\n");
        printf("8. Show Feedback\n");
        printf("9. Pay\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                viewItems();
                break;
            case 3:
                viewMedicines();
                break;
            case 4:
                printf("Enter your user ID to add items to cart: ");
                scanf("%d", &userId);
                printf("Enter 1 for Grocery items or 2 for Medicine items: ");
                int itemType;
                scanf("%d", &itemType);
                addItemToCart(userId, itemType);
                break;
            case 5:
                printf("Enter your user ID to view cart: ");
                scanf("%d", &userId);
                viewCart(userId);
                break;
            case 6:
                printf("Enter your user ID to purchase: ");
                scanf("%d", &userId);
                purchaseItem(userId);
                break;
            case 7:
                printf("Enter your user ID to give feedback: ");
                scanf("%d", &userId);
                giveFeedback(userId);
                break;
            case 8:
                showFeedback();
                break;
            case 9:
                printf("Enter your user ID to pay: ");
                scanf("%d", &userId);
                pay(userId);
                break;
            case 10:
                printf("Exiting the program.\n");
                free(users);  // Free dynamically allocated memory
                free(cart);
                free(cartItemCount);
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Register a new user with limitless registration
void registerUser() {
    if (userCount == usersCapacity) {
        expandUserArray();
    }
    
    User newUser;
    printf("Enter Student ID: ");
    scanf("%d", &newUser.studentId);
    printf("Enter Name: ");
    getchar();  // to consume leftover newline character
    fgets(newUser.name, 50, stdin);
    newUser.name[strcspn(newUser.name, "\n")] = 0;  // remove newline character
    printf("Enter ID Card Number: ");
    scanf("%s", newUser.idCard);
    
    users[userCount++] = newUser;
    printf("User registered successfully.\n");
    
    // Expand cart array for the new user
    expandCartArray(userCount - 1);
}

// Expand user array dynamically when needed
void expandUserArray() {
    usersCapacity += 5;  // Increase capacity by 5
    users = (User *)realloc(users, usersCapacity * sizeof(User));
    if (users == NULL) {
        printf("Memory allocation failed for users.\n");
        exit(1);
    }
}

// View available grocery items
void viewItems() {
    printf("\nAvailable Grocery Items:\n");
    for (int i = 0; i < MAX_ITEMS; i++) {
        printf("ID: %d, Name: %s, Price: %.2f\n", groceryItems[i].id, groceryItems[i].name, groceryItems[i].price);
    }
}

// View special medicine items
void viewMedicines() {
    printf("\nSpecial Medicine Corner:\n");
    for (int i = 0; i < MAX_MEDICINE_ITEMS; i++) {
        printf("ID: %d, Name: %s, Price: %.2f\n", medicineItems[i].id, medicineItems[i].name, medicineItems[i].price);
    }
}

// Add item to the cart
void addItemToCart(int userId, int itemType) {
    int itemId, quantity, userIndex = userId - 1;
    
    // Check if the user exists
    if (userIndex < 0 || userIndex >= userCount) {
        printf("Invalid user ID.\n");
        return;
    }

    if (cartItemCount[userIndex] >= MAX_CART_ITEMS) {
        printf("Cart is full!\n");
        return;
    }

    if (itemType == 1) {
        printf("Enter item ID to add to cart (Grocery items): ");
        scanf("%d", &itemId);

        // Check if itemId exists in grocery items
        int itemFound = 0;
        for (int i = 0; i < MAX_ITEMS; i++) {
            if (groceryItems[i].id == itemId) {
                itemFound = 1;
                break;
            }
        }

        if (!itemFound) {
            printf("Item not found in grocery items!\n");
            return;
        }

    } else if (itemType == 2) {
        printf("Enter item ID to add to cart (Medicine items): ");
        scanf("%d", &itemId);

        // Check if itemId exists in medicine items
        int itemFound = 0;
        for (int i = 0; i < MAX_MEDICINE_ITEMS; i++) {
            if (medicineItems[i].id == itemId) {
                itemFound = 1;
                break;
            }
        }

        if (!itemFound) {
            printf("Item not found in medicine items!\n");
            return;
        }
    } else {
        printf("Invalid item type!\n");
        return;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    // Add item to the cart
    cart[userIndex][cartItemCount[userIndex]].itemId = itemId;
    cart[userIndex][cartItemCount[userIndex]].quantity = quantity;
    cartItemCount[userIndex]++;
    printf("Item added to cart.\n");
}

// View user's cart
void viewCart(int userId) {
    int userIndex = userId - 1;
    
    // Check if the user exists
    if (userIndex < 0 || userIndex >= userCount) {
        printf("Invalid user ID.\n");
        return;
    }

    printf("\nYour Cart:\n");
    float total = 0;
    for (int i = 0; i < cartItemCount[userIndex]; i++) {
        int itemId = cart[userIndex][i].itemId;
        int quantity = cart[userIndex][i].quantity;

        // Check if the item is from grocery items
        for (int j = 0; j < MAX_ITEMS; j++) {
            if (groceryItems[j].id == itemId) {
                printf("Item: %s (Grocery), Quantity: %d, Price: %.2f, Total: %.2f\n", groceryItems[j].name, quantity, groceryItems[j].price, groceryItems[j].price * quantity);
                total += groceryItems[j].price * quantity;
                break;
            }
        }

        // Check if the item is from medicine items
        for (int j = 0; j < MAX_MEDICINE_ITEMS; j++) {
            if (medicineItems[j].id == itemId) {
                printf("Item: %s (Medicine), Quantity: %d, Price: %.2f, Total: %.2f\n", medicineItems[j].name, quantity, medicineItems[j].price, medicineItems[j].price * quantity);
                total += medicineItems[j].price * quantity;
                break;
            }
        }
    }
    printf("Total: %.2f\n", total);
}

// Purchase items in the cart
void purchaseItem(int userId) {
    int userIndex = userId - 1;
    
    // Check if the user exists
    if (userIndex < 0 || userIndex >= userCount) {
        printf("Invalid user ID.\n");
        return;
    }

    // If the cart is empty
    if (cartItemCount[userIndex] == 0) {
        printf("Your cart is empty.\n");
        return;
    }

    // Calculate total price
    float total = calculateTotal(userId);
    printf("You are about to purchase items worth %.2f.\n", total);
}

// Calculate total price of the cart
float calculateTotal(int userId) {
    float total = 0;
    int userIndex = userId - 1;

    for (int i = 0; i < cartItemCount[userIndex]; i++) {
        int itemId = cart[userIndex][i].itemId;
        int quantity = cart[userIndex][i].quantity;

        // Check if the item is from grocery items
        for (int j = 0; j < MAX_ITEMS; j++) {
            if (groceryItems[j].id == itemId) {
                total += groceryItems[j].price * quantity;
                break;
            }
        }

        // Check if the item is from medicine items
        for (int j = 0; j < MAX_MEDICINE_ITEMS; j++) {
            if (medicineItems[j].id == itemId) {
                total += medicineItems[j].price * quantity;
                break;
            }
        }
    }

    return total;
}

// Give feedback
void giveFeedback(int userId) {
    int userIndex = userId - 1;
    
    // Check if the user exists
    if (userIndex < 0 || userIndex >= userCount) {
        printf("Invalid user ID.\n");
        return;
    }

    Feedback feedback;
    feedback.studentId = userId;
    printf("Enter your feedback: ");
    getchar();  // to consume leftover newline
    fgets(feedback.feedback, 200, stdin);

    feedbacks[feedbackCount++] = feedback;
    printf("Feedback submitted.\n");
}

// Show all feedback
void showFeedback() {
    printf("\nFeedback:\n");
    for (int i = 0; i < feedbackCount; i++) {
        printf("User %d: %s\n", feedbacks[i].studentId, feedbacks[i].feedback);
    }
}

// Pay for the items in the cart
void pay(int userId) {
    int userIndex = userId - 1;
    
    // Check if the user exists
    if (userIndex < 0 || userIndex >= userCount) {
        printf("Invalid user ID.\n");
        return;
    }

    // Calculate total price
    float total = calculateTotal(userId);
    printf("Payment complete. Total: %.2f\n", total);
}

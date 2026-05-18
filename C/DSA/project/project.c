#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char itemName[50];
    float price;
    int quantity;
    struct Node* next;
} Node;

//functions for creating and managing linked lists
Node* createNode(char* itemName, float price, int quantity) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->itemName, itemName);
    newNode->price = price;
    newNode->quantity = quantity;
    newNode->next = NULL;
    return newNode;
}

// Available grocery items
void displayAvailableItems() {
    printf("\n\033[34m--- Grocery Items ---\n");
    printf("-------------------------------------------------\n");
    printf("Item Name\t\tPrice\n");
    printf("-------------------------------------------------\n");
    printf("1. Apples\t\t300\n");
    printf("2. Bananas\t\t5\n");
    printf("3. Milk\t\t\t60\n");
    printf("4. Bread\t\t20\n");
    printf("-------------------------------------------------\n");
}

// Available medicines
void displayMedicineCorner() {
    printf("\n\033[33m--- Medicine Corner ---\n");
    printf("-------------------------------------------------\n");
    printf("Medicine Name\t\tPrice\n");
    printf("-------------------------------------------------\n");
    printf("1. Paracetamol\t\t2\n");
    printf("2. Aspirin\t\t5\n");
    printf("3. Vitamin C\t\t10\n");
    printf("4. Antibiotic\t\t35\n");
    printf("-------------------------------------------------\n");
}

// Adding items to the cart
void addItemToCart(Node** head, int type) {
    char itemName[50];
    float price;
    int quantity;

    if (type == 1) {
        displayAvailableItems();
    } else if (type == 2) {
        displayMedicineCorner();
    }

    printf("\033[32mEnter item name (exact as shown in the list): ");
    scanf("%s", itemName);

    // Setting prices based on selected type
    if (type == 1) { // Grocery items
        if (strcmp(itemName, "Apples") == 0) price = 300;
        else if (strcmp(itemName, "Bananas") == 0) price = 5;
        else if (strcmp(itemName, "Milk") == 0) price = 60;
        else if (strcmp(itemName, "Bread") == 0) price = 20;
        else {
            printf("Item not available in groceries.\n");
            return;
        }
    } else if (type == 2) { // Medicines
        if (strcmp(itemName, "Paracetamol") == 0) price = 2;
        else if (strcmp(itemName, "Aspirin") == 0) price = 5;
        else if (strcmp(itemName, "Vitamin") == 0) price = 10;
        else if (strcmp(itemName, "Antibiotic") == 0) price = 35;
        else {
            printf("\033[31mItem not available in medicines.\n");
            return;
        }
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    Node* newNode = createNode(itemName, price, quantity);

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    printf("\033[32mItem added to cart successfully!\n");
}

// Viewing the cart
void viewCart(Node* head) {
    if (head == NULL) {
        printf("\033[31mYour cart is empty.\n");
        return;
    }

    printf("\n\033[33m--- Your Cart ---\n");
    printf("-------------------------------------------------\n");
    printf("Item Name\t\tPrice\t\tQuantity\n");
    printf("-------------------------------------------------\n");

    Node* temp = head;
    float total = 0;
    while (temp != NULL) {
        printf("%s\t\t%.2f\t\t%d\n", temp->itemName, temp->price, temp->quantity);
        total += temp->price * temp->quantity;
        temp = temp->next;
    }
    printf("\033[32m-------------------------------------------------\n");
    printf("Total Amount: %.2f\n", total);
}

// Removing an item from the cart
void removeItemFromCart(Node** head) {
    if (*head == NULL) {
        printf("\033[31mYour cart is empty.\n");
        return;
    }

    char itemName[50];
    printf("\033[31mEnter the name of the item to remove: ");
    scanf("%s", itemName);

    Node* temp = *head;
    Node* prev = NULL;

    while (temp != NULL && strcmp(temp->itemName, itemName) != 0) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\033[31mItem not found in the cart.\n");
        return;
    }

    if (prev == NULL) {
        *head = temp->next;
    } else {
        prev->next = temp->next;
    }

    free(temp);
    printf("\033[31mItem removed from cart successfully!\n");
}

// Emergency Services
void medicalServices() {
    printf("\n\033[36m--- Medical Services ---\n");
    printf("1. Ambulance Service: Call 999\n");
    printf("2. Emergency Helpline: Call 999\n");
    printf("-------------------------------------------------\n");
}

// Collect feedback and rating
void collectFeedback() {
    char feedback[200];
    int rating;

    printf("\n\033[33m--- Feedback and Rating ---\n");
    printf("Please provide your feedback: ");
    scanf(" %[^\n]", feedback);
    do {
        printf("\033[33mRate our service (1-5): ");
        scanf("%d", &rating);
        if (rating < 1 || rating > 5) {
            printf("\033[31mInvalid rating. Please enter a value between 1 and 5.\n");
        }
    } while (rating < 1 || rating > 5);

    printf("\n\033[32mThank you for your feedback!\n");
    printf("Your Feedback: %s\n", feedback);
    printf("Your Rating: %d/5\n", rating);
}

// Finalizing the order and showing receipt
void generateReceipt(Node* head, char* userName, char* address, char* phone) {
    if (head == NULL) {
        printf("\033[31mYour cart is empty. Add items to proceed.\n");
        return;
    }

    printf("\n\033[33m--- Receipt ---\n");
    printf("Customer Name: %s\n", userName);
    printf("Delivery Address: %s\n", address);
    printf("Phone Number: %s\n", phone);
    printf("-------------------------------------------------\n");
    printf("Item Name\t\tPrice\t\tQuantity\n");
    printf("-------------------------------------------------\n");

    Node* temp = head;
    float total = 0;
    while (temp != NULL) {
        printf("%s\t\t%.2f\t\t%d\n", temp->itemName, temp->price, temp->quantity);
        total += temp->price * temp->quantity;
        temp = temp->next;
    }
    printf("\033[31m-------------------------------------------------\n");
    printf("Total Amount: %.2f\n", total);
    printf("Thank you for shopping with us! Your order will be delivered shortly.\n");
}

// Freeing allocated memory
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// Main function
int main() {
    Node* cart = NULL;
    char userName[50];
    char address[100];
    char phone[15];
    int choice;

    do {
        printf("\n\033[31m  ---EasyCheckOut---\033[0m\n");
        printf("\033[35m1. View Grocery Items\n");
        printf("2. Add Grocery to Cart\n");
        printf("3. View Medicine Corner\n");
        printf("4. Add Medicine to Cart\n");
        printf("5. View Cart\n");
        printf("6. Remove Item from Cart\n");
        printf("7. Medical Services\n");
        printf("8. Place Order\n");
        printf("9. Provide Feedback and Rating\n");
        printf("10. Exit\n");
        printf("\033[32mEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAvailableItems();
                break;
            case 2:
                addItemToCart(&cart, 1);
                break;
            case 3:
                displayMedicineCorner();
                break;
            case 4:
                addItemToCart(&cart, 2);
                break;
            case 5:
                viewCart(cart);
                break;
            case 6:
                removeItemFromCart(&cart);
                break;
            case 7:
                medicalServices();
                break;
            case 8:
                if (cart == NULL) {
                    printf("\033[31mYour cart is empty. Please add items to place an order.\n");
                    break;
                }
                printf("\033[34mPlease enter your details to complete the order:\n");
                printf("Enter your name: ");
                scanf(" %[^\n]", userName);
                printf("Enter your delivery address: ");
                scanf(" %[^\n]", address);
                printf("Enter your phone number: ");
                scanf(" %[^\n]", phone);

                generateReceipt(cart, userName, address, phone);
                freeList(cart);
                cart = NULL;
                break;
            case 9:
                collectFeedback();
                break;
            case 10:
                printf("\033[31mExiting the program... Goodbye!\n");
                freeList(cart);
                break;
            default:
                printf("\033[31mInvalid choice. Please try again.\n");
        }
    } while (choice != 10);

    return 0;
}

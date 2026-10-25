#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char itemName[50];
    float price;
    int quantity;
    struct Node* next;
} Node;

// Utility functions for creating and managing linked lists
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
    printf("\n--- Grocery Items ---\n");
    printf("-------------------------------------------------\n");
    printf("Item Name\t\tPrice\n");
    printf("-------------------------------------------------\n");
    printf("1. Apples\t\t2.5\n");
    printf("2. Bananas\t\t1.0\n");
    printf("3. Milk\t\t\t3.2\n");
    printf("4. Bread\t\t1.5\n");
    printf("-------------------------------------------------\n");
}

// Available medicines
void displayMedicineCorner() {
    printf("\n--- Medicine Corner ---\n");
    printf("-------------------------------------------------\n");
    printf("Medicine Name\t\tPrice\n");
    printf("-------------------------------------------------\n");
    printf("1. Paracetamol\t\t0.5\n");
    printf("2. Aspirin\t\t0.8\n");
    printf("3. Vitamin C\t\t1.2\n");
    printf("4. Antibiotic\t\t2.0\n");
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

    printf("Enter item name (exact as shown in the list): ");
    scanf("%s", itemName);

    // Setting prices based on selected type
    if (type == 1) { // Grocery items
        if (strcmp(itemName, "Apples") == 0) price = 2.5;
        else if (strcmp(itemName, "Bananas") == 0) price = 1.0;
        else if (strcmp(itemName, "Milk") == 0) price = 3.2;
        else if (strcmp(itemName, "Bread") == 0) price = 1.5;
        else {
            printf("Item not available in groceries.\n");
            return;
        }
    } else if (type == 2) { // Medicines
        if (strcmp(itemName, "Paracetamol") == 0) price = 0.5;
        else if (strcmp(itemName, "Aspirin") == 0) price = 0.8;
        else if (strcmp(itemName, "Vitamin") == 0) price = 1.2;
        else if (strcmp(itemName, "Antibiotic") == 0) price = 2.0;
        else {
            printf("Item not available in medicines.\n");
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

    printf("Item added to cart successfully!\n");
}

// Viewing the cart
void viewCart(Node* head) {
    if (head == NULL) {
        printf("Your cart is empty.\n");
        return;
    }

    printf("\n--- Your Cart ---\n");
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
    printf("-------------------------------------------------\n");
}

// Emergency Services
void medicalServices() {
    printf("\n--- Emergency Services ---\n");
    printf("1. Ambulance Service: Call 16121\n");
    printf("2. Emergency Helpline: Call 999\n");
    printf("3. Daffodil medical centre\n");
    printf("-------------------------------------------------\n");
}

// Finalizing the order and showing receipt
void generateReceipt(Node* head, char* userName, char* address, char* phone) {
    if (head == NULL) {
        printf("Your cart is empty. Add items to proceed.\n");
        return;
    }

    printf("\n--- Receipt ---\n");
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
    printf("-------------------------------------------------\n");
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
        printf("\n--- EasyCheckOut ---\n");
        printf("1. View Grocery Items\n");
        printf("2. Add Grocery to Cart\n");
        printf("3. View Medicine Corner\n");
        printf("4. Add Medicine to Cart\n");
        printf("5. View Cart\n");
        printf("6. Emergency Services\n");
        printf("7. Place Order\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
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
                medicalServices();
                break;
            case 7:
                if (cart == NULL) {
                    printf("Your cart is empty. Please add items to place an order.\n");
                    break;
                }
                printf("Please enter your details to complete the order:\n");
                printf("Enter your name: ");
                scanf(" %[^\n]", userName);
                printf("Enter your delivery address: ");
                scanf(" %[^\n]", address);
                printf("Enter your phone number: ");
                scanf(" %[^\n]", phone);

                // Generate receipt after gathering user details
                generateReceipt(cart, userName, address, phone);
                freeList(cart);
                cart = NULL;
                break;
            case 8:
                printf("Exiting the program. Goodbye!\n");
                freeList(cart);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

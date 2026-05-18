#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100
#define NAME_LENGTH 50
#define PHONE_LENGTH 15

typedef struct {
    char name[NAME_LENGTH];
    char phone[PHONE_LENGTH];
} Contact;

Contact phonebook[MAX_CONTACTS];
int contactCount = 0;

void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        printf("Phonebook is full!\n");
        return;
    }
    printf("Enter name: ");
    scanf("%s", phonebook[contactCount].name);
    printf("Enter phone: ");
    scanf("%s", phonebook[contactCount].phone);
    contactCount++;
}

void deleteContact() {
    char name[NAME_LENGTH];
    printf("Enter name to delete: ");
    scanf("%s", name);
    for (int i = 0; i < contactCount; i++) {
        if (strcmp(phonebook[i].name, name) == 0) {
            phonebook[i] = phonebook[--contactCount];
            printf("Contact deleted.\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

void searchContact() {
    char name[NAME_LENGTH];
    printf("Enter name to search: ");
    scanf("%s", name);
    for (int i = 0; i < contactCount; i++) {
        if (strcmp(phonebook[i].name, name) == 0) {
            printf("Found: %s - %s\n", phonebook[i].name, phonebook[i].phone);
            return;
        }
    }
    printf("Contact not found.\n");
}

void displayContacts() {
    for (int i = 0; i < contactCount; i++) {
        printf("%s - %s\n", phonebook[i].name, phonebook[i].phone);
    }
}

int main() {
    int choice;
    while (1) {
        printf("1. Add Contact\n2. Delete Contact\n3. Search Contact\n4. Display Contacts\n5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addContact(); break;
            case 2: deleteContact(); break;
            case 3: searchContact(); break;
            case 4: displayContacts(); break;
            case 5: exit(0);
            default: printf("Invalid option!\n");
        }
    }
    return 0;
}

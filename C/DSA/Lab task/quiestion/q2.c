#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct StudentNode {
    int studentID;
    struct StudentNode* next;
};
// Function to create a new node
struct StudentNode* createNode(int studentID) {
    struct StudentNode* newNode = (struct StudentNode*)malloc(sizeof(struct StudentNode));
    newNode->studentID = studentID;
    newNode->next = NULL;
    return newNode;
}

// Function to add a new student to the end of the list
void addStudent(struct StudentNode** head, int studentID) {
    struct StudentNode* newNode = createNode(studentID);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct StudentNode* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
// Function to update a student's ID
void updateStudentID(struct StudentNode* head, int oldID, int newID) {
    struct StudentNode* temp = head;
    while (temp != NULL) {
        if (temp->studentID == oldID) {
            temp->studentID = newID;
            return;
        }
        temp = temp->next;
    }
    printf("Student with ID %d not found.\n", oldID);
}

// Function to display all student IDs
void displayStudentIDs(struct StudentNode* head) {
    struct StudentNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->studentID);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct StudentNode* head = NULL;

    // Adding students
    addStudent(&head, 101);
    addStudent(&head, 102);
    addStudent(&head, 103);

    // Displaying student IDs
    printf("Student IDs in order of enrollment:\n");
    displayStudentIDs(head);

    // Updating a student ID
    updateStudentID(head, 102, 202);

    // Displaying updated student IDs
    printf("Updated Student IDs:\n");
    displayStudentIDs(head);

    return 0;
}

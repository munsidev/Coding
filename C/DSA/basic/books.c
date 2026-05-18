#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 5
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100

// Define a structure to hold book information
typedef struct {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
} Book;

// Function declarations
void inputBooks(Book *books, int count);
void displayBooks(const Book *books, int count);
int countBooks(const Book *books, int count);

int main() {
    Book books[MAX_BOOKS];
    int totalBooks;

    // Input book information
    printf("Enter information for %d books:\n", MAX_BOOKS);
    inputBooks(books, MAX_BOOKS);

    // Display book information
    printf("\nBook List:\n");
    displayBooks(books, MAX_BOOKS);

    // Count the total number of books using recursion
    totalBooks = countBooks(books, MAX_BOOKS);
    printf("\nTotal number of books: %d\n", totalBooks);

    return 0;
}

// Function to input book information into an array of Book structures
void inputBooks(Book *books, int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter title of book %d: ", i + 1);
        fgets(books[i].title, MAX_TITLE_LENGTH, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';  // Remove newline character
        
        printf("Enter author of book %d: ", i + 1);
        fgets(books[i].author, MAX_AUTHOR_LENGTH, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';  // Remove newline character
    }
}

// Function to display book information from an array of Book structures
void displayBooks(const Book *books, int count) {
    for (int i = 0; i < count; i++) {
        printf("Book %d: Title: %s, Author: %s\n", i + 1, books[i].title, books[i].author);
    }
}

// Recursive function to count the total number of books
int countBooks(const Book *books, int count) {
    if (count == 0) {
        return 0;
    } else {
        // Count the current book and recurse for the remaining books
        return 1 + countBooks(books, count - 1);
    }
}

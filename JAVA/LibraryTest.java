import java.util.ArrayList;

class Book {
    private String title;
    private String author;
    private String isbn;

    // Constructor
    public Book(String title, String author, String isbn) {
        this.title = title;
        this.author = author;
        this.isbn = isbn;
    }

    // Method to display book info
    public void displayInfo() {
        System.out.println("Title: " + title + ", Author: " + author + ", ISBN: " + isbn);
    }
}

class Member {
    private String name;
    private int memberId;
    private ArrayList<Book> borrowedBooks;

    // Constructor
    public Member(String name, int memberId) {
        this.name = name;
        this.memberId = memberId;
        this.borrowedBooks = new ArrayList<>();
    }

    // Method to borrow book
    public void borrowBook(Book b) {
        borrowedBooks.add(b);
        System.out.println(name + " borrowed: " + b.title);
    }

    // Method to display all borrowed books
    public void displayBorrowedBooks() {
        System.out.println(name + "'s borrowed books:");
        for (Book b : borrowedBooks) {
            b.displayInfo();
        }
    }
}

public class LibraryTest {
    public static void main(String[] args) {
        // Create books
        Book book1 = new Book("1984", "George Orwell", "12345");
        Book book2 = new Book("To Kill a Mockingbird", "Harper Lee", "67890");
        Book book3 = new Book("The Great Gatsby", "F. Scott Fitzgerald", "11223");

        // Create member
        Member member1 = new Member("Alice", 101);

        // Member borrows books
        member1.borrowBook(book1);
        member1.borrowBook(book3);

        // Display borrowed books
        member1.displayBorrowedBooks();
    }
}

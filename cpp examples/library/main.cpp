#include <iostream>
#include <string>

class Book {
public:
    int bookID;
    std::string title;
    std::string author;
    std::string publisher;
    int availableCopies;

    Book() : bookID(0), title(""), author(""), publisher(""), availableCopies(0) {}

    void setBookDetails(int id, std::string t, std::string a, std::string p, int copies) {
        bookID = id;
        title = t;
        author = a;
        publisher = p;
        availableCopies = copies;
    }

    void displayBookDetails() const {
        std::cout << "Book ID: " << bookID << "\n";
        std::cout << "Title: " << title << "\n";
        std::cout << "Author: " << author << "\n";
        std::cout << "Publisher: " << publisher << "\n";
        std::cout << "Available Copies: " << availableCopies << "\n";
    }
};
class User {
public:
    int userID;
    std::string name;
    std::string email;
    int borrowedBooks[10]; // Assuming a user can borrow up to 10 books
    int borrowedCount;

    User() : userID(0), name(""), email(""), borrowedCount(0) {}

    void setUserDetails(int id, std::string n, std::string e) {
        userID = id;
        name = n;
        email = e;
    }

    void displayUserDetails() const {
        std::cout << "User ID: " << userID << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Email: " << email << "\n";
        std::cout << "Borrowed Books: ";
        for (int i = 0; i < borrowedCount; ++i) {
            std::cout << borrowedBooks[i] << " ";
        }
        std::cout << "\n";
    }
};
class Library {
private:
    Book books[100]; // Assuming the library can hold up to 100 books
    User users[100]; // Assuming the library can have up to 100 users
    int bookCount;
    int userCount;

public:
    Library() : bookCount(0), userCount(0) {}

    void addBook(const Book& book) {
        if (bookCount < 100) {
            books[bookCount] = book;
            ++bookCount;
        } else {
            std::cout << "Library is full, cannot add more books.\n";
        }
    }

    void addUser(const User& user) {
        if (userCount < 100) {
            users[userCount] = user;
            ++userCount;
        } else {
            std::cout << "Library is full, cannot add more users.\n";
        }
    }

    void listAllBooks() const {
        for (int i = 0; i < bookCount; ++i) {
            books[i].displayBookDetails();
            std::cout << "-------------------------\n";
        }
    }

    void listAllUsers() const {
        for (int i = 0; i < userCount; ++i) {
            users[i].displayUserDetails();
            std::cout << "-------------------------\n";
        }
    }

    // Methods for borrowing and returning books can be added here
};
int main() {
    Library library;

    // Adding books
    Book book1;
    book1.setBookDetails(1, "1984", "George Orwell", "Secker & Warburg", 5);
    library.addBook(book1);

    Book book2;
    book2.setBookDetails(2, "To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott & Co.", 3);
    library.addBook(book2);

    // Adding users
    User user1;
    user1.setUserDetails(1, "Alice", "alice@example.com");
    library.addUser(user1);

    User user2;
    user2.setUserDetails(2, "Bob", "bob@example.com");
    library.addUser(user2);

    // Listing all books
    std::cout << "Books in the Library:\n";
    library.listAllBooks();

    // Listing all users
    std::cout << "\nUsers in the Library:\n";
    library.listAllUsers();

    return 0;
}

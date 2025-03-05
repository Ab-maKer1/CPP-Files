#include <iostream>
#include <string>

class Book {
public:
    int bookID;
    std::string title;
    std::string author;
    std::string publisher;
    int availableCopies;

    Book() : bookID(0), availableCopies(0) {}

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

    User() : userID(0), borrowedCount(0) {}

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
#include <fstream>

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

    void saveToFile(const std::string& filename) const {
        std::ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << bookCount << "\n";
            for (int i = 0; i < bookCount; ++i) {
                outFile << books[i].bookID << "\n";
                outFile << books[i].title << "\n";
                outFile << books[i].author << "\n";
                outFile << books[i].publisher << "\n";
                outFile << books[i].availableCopies << "\n";
            }
            outFile << userCount << "\n";
            for (int i = 0; i < userCount; ++i) {
                outFile << users[i].userID << "\n";
                outFile << users[i].name << "\n";
                outFile << users[i].email << "\n";
                outFile << users[i].borrowedCount << "\n";
                for (int j = 0; j < users[i].borrowedCount; ++j) {
                    outFile << users[i].borrowedBooks[j] << "\n";
                }
            }
            outFile.close();
            std::cout << "Library information saved to file successfully.\n";
        } else {
            std::cout << "Failed to open file for writing.\n";
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream inFile(filename);
        if (inFile.is_open()) {
            inFile >> bookCount;
            inFile.ignore(); // Ignore the newline character after the book count
            for (int i = 0; i < bookCount; ++i) {
                inFile >> books[i].bookID;
                inFile.ignore(); // Ignore the newline character after bookID
                std::getline(inFile, books[i].title);
                std::getline(inFile, books[i].author);
                std::getline(inFile, books[i].publisher);
                inFile >> books[i].availableCopies;
                inFile.ignore(); // Ignore the newline character after availableCopies
            }
            inFile >> userCount;
            inFile.ignore(); // Ignore the newline character after the user count
            for (int i = 0; i < userCount; ++i) {
                inFile >> users[i].userID;
                inFile.ignore(); // Ignore the newline character after userID
                std::getline(inFile, users[i].name);
                std::getline(inFile, users[i].email);
                inFile >> users[i].borrowedCount;
                inFile.ignore(); // Ignore the newline character after borrowedCount
                for (int j = 0; j < users[i].borrowedCount; ++j) {
                    inFile >> users[i].borrowedBooks[j];
                    inFile.ignore(); // Ignore the newline character after each borrowed book ID
                }
            }
            inFile.close();
            std::cout << "Library information loaded from file successfully.\n";
        } else {
            std::cout << "Failed to open file for reading.\n";
        }
    }
};
void displayMenu() {
    std::cout << "\n--- Library Management System ---\n";
    std::cout << "1. Add Books\n";
    std::cout << "2. Add Users\n";
    std::cout << "3. List All Books\n";
    std::cout << "4. List All Users\n";
    std::cout << "5. Save Library Information to File\n";
    std::cout << "6. Load Library Information from File\n";
    std::cout << "7. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    Library library;
    int choice;
    std::string filename = "library.txt";

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                std::cout << "How many books do you want to add? ";
                std::cin >> num;
                for (int i = 0; i < num; ++i) {
                    int id, copies;
                    std::string title, author, publisher;
                    std::cout << "Enter Book ID: ";
                    std::cin >> id;
                    std::cout << "Enter Title: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, title);
                    std::cout << "Enter Author: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, author);
                    std::cout << "Enter Publisher: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, publisher);
                    std::cout << "Enter Available Copies: ";
                    std::cin >> copies;
                    Book book;
                    book.setBookDetails(id, title, author, publisher, copies);
                    library.addBook(book);
                }
                break;
            }
            case 2: {
                int num;
                std::cout << "How many users do you want to add? ";
                std::cin >> num;
                for (int i = 0; i < num; ++i) {
                    int id;
                    std::string name, email;
                    std::cout << "Enter User ID: ";
                    std::cin >> id;
                    std::cout << "Enter Name: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, name);
                    std::cout << "Enter Email: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, email);
                    User user;
                    user.setUserDetails(id, name, email);
                    library.addUser(user);
                }
                break;
            }
            case 3: {
                library.listAllBooks();
                break;
            }
            case 4: {
                library.listAllUsers();
                break;
            }
            case 5: {
                library.saveToFile(filename);
                break;
            }
            case 6: {
                library.loadFromFile(filename);
                break;
            }
            case 7: {
                std::

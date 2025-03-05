#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <iostream>
#include <string>
#define MAX_BOOKS 100
#define MAX_USERS 100
#define MAX_REVIEWS 10

struct Book {
    int id;
    std::string title;
    std::string author;
    double price;
    std::string reviews[MAX_REVIEWS];
    int reviewCount;
    Book();
};

struct User {
    int id;
    std::string username;
    std::string password;
    User();
};

class Bookstore {
private:
    Book books[MAX_BOOKS];
    User users[MAX_USERS];
    int bookCount;
    int userCount;
    int currentUser;

public:
    Bookstore();
    void registerUser(int, std::string, std::string);
    bool loginUser(std::string, std::string);
    void addBook(int, std::string, std::string, double);
    void searchBook(std::string);
    void addReview(int, std::string);
    void displayBooks();
};

#endif
#include "bookstore.h"
using namespace std;

Book::Book() : reviewCount(0) {}

User::User() {}

Bookstore::Bookstore() : bookCount(0), userCount(0), currentUser(-1) {}

void Bookstore::registerUser(int id, string username, string password) {
    if (userCount < MAX_USERS) {
        users[userCount] = {id, username, password};
        userCount++;
        cout << "User registered successfully!" << endl;
    } else {
        cout << "User limit reached!" << endl;
    }
}

bool Bookstore::loginUser(string username, string password) {
    for (int i = 0; i < userCount; i++) {
        if (users[i].username == username && users[i].password == password) {
            currentUser = users[i].id;
            cout << "Login successful!" << endl;
            return true;
        }
    }
    cout << "Invalid username or password!" << endl;
    return false;
}

void Bookstore::addBook(int id, string title, string author, double price) {
    if (bookCount < MAX_BOOKS) {
        books[bookCount] = {id, title, author, price, {}, 0};
        bookCount++;
        cout << "Book added successfully!" << endl;
    } else {
        cout << "Book limit reached!" << endl;
    }
}

void Bookstore::searchBook(string title) {
    for (int i = 0; i < bookCount; i++) {
        if (books[i].title == title) {
            cout << "Book Found: " << books[i].title << " by " << books[i].author << ", Price: $" << books[i].price << endl;
            for (int j = 0; j < books[i].reviewCount; j++) {
                cout << "Review: " << books[i].reviews[j] << endl;
            }
            return;
        }
    }
    cout << "Book not found!" << endl;
}

void Bookstore::addReview(int id, string review) {
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            if (books[i].reviewCount < MAX_REVIEWS) {
                books[i].reviews[books[i].reviewCount++] = review;
                cout << "Review added successfully!" << endl;
            } else {
                cout << "Review limit reached!" << endl;
            }
            return;
        }
    }
    cout << "Book not found!" << endl;
}

void Bookstore::displayBooks() {
    for (int i = 0; i < bookCount; i++) {
        cout << "ID: " << books[i].id << ", Title: " << books[i].title << ", Author: " << books[i].author
             << ", Price: $" << books[i].price << endl;
    }
}
#include "bookstore.h"
using namespace std;

int main() {
    Bookstore bs;
    bs.registerUser(1, "user1", "password1");
    bs.registerUser(2, "user2", "password2");

    bs.loginUser("user1", "password1");
    bs.addBook(1, "1984", "George Orwell", 15.99);
    bs.addBook(2, "To Kill a Mockingbird", "Harper Lee", 10.99);

    bs.displayBooks();
    bs.searchBook("1984");
    bs.addReview(1, "Amazing book!");
    bs.searchBook("1984");

    return 0;
}


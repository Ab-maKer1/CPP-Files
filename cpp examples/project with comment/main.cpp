#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
private:
    // Private member variables to store student details
    string id;  // Student ID
    string name;  // Student Name
    string clothingTypes[50];  // Array to store clothing types
    string clothingColors[50];  // Array to store clothing colors
    int numClothingItems;  // Number of clothing items

public:

    // Method to check if a student ID already exists by attempting to open a file with that ID
    bool idExists(const string& studentID) {
        ifstream inFile(studentID);  // Attempt to open a file with the student ID as its name
        return inFile.good();  // Return true if the file can be opened, false otherwise
    }

    // Method to input student information
    void inputInfo() {
        // Loop until a unique student ID is entered
        while (true) {
            cout << "Enter the student ID: ";
            cin >> id;  // Input student ID
            cin.ignore();  // Ignore the newline character from the input buffer
            if (idExists(id)) {
                // If the ID already exists, prompt the user to enter a different ID
                cout << "Student ID already exists. Please enter a different ID." << endl;
            } else {
                break;  // Exit the loop if a unique ID is entered
            }
        }

        cout << "Enter the student name: ";
        getline(cin, name);  // Input student name
        cout << "Enter the number of clothing items: ";
        cin >> numClothingItems;  // Input number of clothing items
        cin.ignore();  // Ignore the newline character from the input buffer

        // Loop to input clothing types and colors
        for (int i = 0; i < numClothingItems; ++i) {
            cout << "Enter clothing type " << i + 1 << ": ";
            getline(cin, clothingTypes[i]);  // Input clothing type
            cout << "Enter clothing color " << i + 1 << ": ";
            getline(cin, clothingColors[i]);  // Input clothing color
        }
    }

    // Method to save student information to a file
    void saveToFile() {
        ofstream outFile(id , ios::out);  // Open a file with the student ID as its name
        if (!outFile) {
            cout << "Error opening file!" << endl;  // Error message if the file can't be opened
            return;
        }
        outFile << id << endl;  // Write student ID to the file
        outFile << name << endl;  // Write student name to the file
        outFile << numClothingItems << endl;  // Write number of clothing items to the file

        // Loop to write clothing types and colors to the file
        for (int i = 0; i < numClothingItems; ++i) {
            outFile << clothingTypes[i] << endl;  // Write clothing type
            outFile << clothingColors[i] << endl;  // Write clothing color
        }

        outFile.close();  // Close the file
        cout << "Clothing information stored for student ID " << id << endl;  // Confirmation message
    }

    // Method to load student information from a file
    void loadFromFile(const string& studentID) {
        ifstream inFile(studentID);  // Open a file with the student ID as its name
        if (!inFile) {
            cout << "No clothing information found for student ID " << studentID << endl;  // Error message if the file can't be opened
            return;
        }
        getline(inFile, id);  // Read student ID from the file
        getline(inFile, name);  // Read student name from the file
        inFile >> numClothingItems;  // Read number of clothing items from the file
        inFile.ignore();  // Ignore the newline character from the input buffer

        // Loop to read clothing types and colors from the file
        for (int i = 0; i < numClothingItems; ++i) {
            getline(inFile, clothingTypes[i]);  // Read clothing type
            getline(inFile, clothingColors[i]);  // Read clothing color
        }

        inFile.close();  // Close the file

        // Display the loaded clothing information
        cout << "Clothing information for student ID " << studentID << ":" << endl;
        cout << "Name: " << name << endl;
        cout << "Clothing Items:" << endl;
        for (int i = 0; i < numClothingItems; ++i) {
            cout << "  - Type: " << clothingTypes[i] << ", Color: " << clothingColors[i] << endl;
        }
    }

    // Method to update clothing information for a student
    void updateClothing() {
        string studentID;
        cout << "Enter the student ID to update clothing information: ";
        cin >> studentID;  // Input student ID
        loadFromFile(studentID);  // Load existing information

        int newClothingItems;
        cout << "Enter the number of new clothing items to add: ";
        cin >> newClothingItems;  // Input number of new clothing items
        cin.ignore();  // Ignore leftover newline character

        // Loop to input new clothing types and colors
        for (int i = numClothingItems; i < numClothingItems + newClothingItems; ++i) {
            cout << "Enter clothing type " << i + 1 << ": ";
            getline(cin, clothingTypes[i]);  // Input new clothing type
            cout << "Enter clothing color " << i + 1 << ": ";
            getline(cin, clothingColors[i]);  // Input new clothing color
        }
        numClothingItems += newClothingItems;  // Update the number of clothing items
        saveToFile();  // Save the updated information back to file
    }
};

// Function to store clothing information
void storeClothingInfo() {
    Student student;
    student.inputInfo();  // Input student information
    student.saveToFile();  // Save student information to a file
}

// Function to check clothing information
void checkClothingInfo() {
    string studentID;
    cout << "Enter the student ID for checkout: ";
    cin >> studentID;  // Input student ID
    Student student;
    student.loadFromFile(studentID);  // Load and display student information from a file
}

// Function to update clothing information
void updateClothingInfo() {
    Student student;
    student.updateClothing();  // Update student clothing information
}

// Function to display the menu and handle user choices
void showMenu() {
    int choice;
    while (true) {
        cout << "\nDIGITAL CHECKOUT SYSTEM\n";
        cout << "1. Store Clothing Information\n";
        cout << "2. Check Clothing Information\n";
        cout << "3. Update Clothing Information\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;  // Input user's choice

        // Switch case to handle user's choice
        switch (choice) {
            case 1:
                storeClothingInfo();  // Store clothing information
                break;
            case 2:
                checkClothingInfo();  // Check clothing information
                break;
            case 3:
                updateClothingInfo();  // Update clothing information
                break;
            case 4:
                cout << "Exiting the system." << endl;  // Exit message
                return;  // Exit the function
            default:
                cout << "Invalid choice. Please try again." << endl;  // Error message for invalid choice
        }
    }
}

int main() {
    cout << "The student ID should be without space" << endl;
    showMenu();  // Show the menu and handle user choices
    return 0;
}




#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
private:
    string id;
    string name;
    string clothingColors[100]; // Array to store clothing colors
    string clothingTypes[100]; // Array to store clothing types
    int numClothingItems; // Number of clothing items

public:
    void inputInfo() {
        cout << "Enter the student ID: ";
        cin >> id;
        cin.ignore(); // Add this here to handle the newline character
        cout << "Enter the student name: ";
        getline(cin, name);
        cout << "Enter the number of clothing items: ";
        cin >> numClothingItems;
        cin.ignore(); // Add this here to handle the newline character
        for (int i = 0; i < numClothingItems; ++i) {
            cout << "Enter clothing type " << i + 1 << ": ";
            getline(cin, clothingTypes[i]);
            cout << "Enter clothing color " << i + 1 << ": ";
            getline(cin, clothingColors[i]);
        }
    }

    void saveToFile() {
        ofstream outFile(id + ".txt"); // Open file in text mode
        if (!outFile) {
            cout << "Error opening file!" << endl;
            return;
        }
        outFile << id << endl;
        outFile << name << endl;
        outFile << numClothingItems << endl;
        for (int i = 0; i < numClothingItems; ++i) {
            outFile << clothingTypes[i] << endl;
            outFile << clothingColors[i] << endl;
        }

        outFile.close();
        cout << "Clothing information stored for student ID " << id << endl;
    }

    void loadFromFile(const string& studentID) {
        ifstream inFile(studentID + ".txt"); // Open file in text mode
        if (!inFile) {
            cout << "No clothing information found for student ID " << studentID << endl;
            return;
        }

        getline(inFile, id);
        getline(inFile, name);
        inFile >> numClothingItems;
        inFile.ignore(); // Add this here to handle the newline character
        for (int i = 0; i < numClothingItems; ++i) {
            getline(inFile, clothingTypes[i]);
            getline(inFile, clothingColors[i]);
        }

        inFile.close();

        cout << "Clothing information for student ID " << studentID << ":" << endl;
        cout << "Name: " << name << endl;
        cout << "Clothing Items:" << endl;
        for (int i = 0; i < numClothingItems; ++i) {
            cout << "  - Type: " << clothingTypes[i] << ", Color: " << clothingColors[i] << endl;
        }
    }

   void updateClothing() {
        string studentID;
        cout << "Enter the student ID to update clothing information: ";
        cin >> studentID;
        loadFromFile(studentID); // Load existing information
        int newClothingItems;
        cout << "Enter the number of new clothing items to add: ";
        cin >> newClothingItems;
        cin.ignore(); // Ignore leftover newline character
        for (int i = numClothingItems; i < numClothingItems + newClothingItems; ++i) {
            cout << "Enter clothing type " << i + 1 << ": ";
            getline(cin, clothingTypes[i]);
            cout << "Enter clothing color " << i + 1 << ": ";
            getline(cin, clothingColors[i]);
        }
        numClothingItems += newClothingItems; // Update the number of clothing items
        saveToFile(); // Save updated information back to file
    }
};

void storeClothingInfo() {
    Student student;
    student.inputInfo();
    student.saveToFile();
}

void checkClothingInfo() {
    string studentID;
    cout << "Enter the student ID for checkout: ";
    cin >> studentID;
    Student student;
    student.loadFromFile(studentID);
}

void updateClothingInfo() {
    Student student;
    student.updateClothing();
}

void showMenu() {
    int choice;
    while (true) {
        cout << "\nDIGITAL CHECKOUT SYSTEM\n";
        cout << "1. Store Clothing Information\n";
        cout << "2. Check Clothing Information\n";
        cout << "3. Update Clothing Information\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                storeClothingInfo();
                break;
            case 2:
                checkClothingInfo();
                break;
            case 3:
                updateClothingInfo();
                break;
            case 4:
                cout << "Exiting the system." << endl;
                return;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}

int main() {
    showMenu();
    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
private:
    string id;
    string name;
    string clothingItems[100]; // Array to store clothing descriptions
    string clothingTypes[100]; // Array to store clothing types
    int numClothingItems; // Number of clothing items

public:
    void inputInfo() {
        cout << "Enter the student ID: ";
        cin >> id;
        cin.ignore(); // To ignore the newline character left by cin

        cout << "Enter the student name: ";
        getline(cin, name);

        cout << "Enter the number of clothing items: ";s
        cin >> numClothingItems;
        cin.ignore(); // To ignore the newline character left by cin

        for (int i = 0; i < numClothingItems; ++i) {
            cout << "Enter clothing type " << i + 1 << ": ";
            getline(cin, clothingTypes[i]);
            cout << "Enter clothing description " << i + 1 << ": ";
            getline(cin, clothingItems[i]);
        }
    }

    void saveToFile() {
        cout << "Saving to file with ID: " << id << endl; // Debug statement
        ofstream outFile(id); // Append .txt to ensure it's a file name
        outFile.open(id);
        if (!outFile) {
            cerr << "Error opening file for writing!" << endl;
            return;
        }

        outFile << "ID: " << id << endl;
        outFile << "Name: " << name << endl;
        outFile << "Clothing Items:" << endl;
        for (int i = 0; i < numClothingItems; ++i) {
            outFile << "  - Type: " << clothingTypes[i] << ", Description: " << clothingItems[i] << endl;
        }

        outFile.close();
        cout << "Clothing information stored for student ID " << id << endl;
    }

    void loadFromFile() {
        cout << "Loading from file with ID: " << id << endl; // Debug statement
        ifstream inFile;// Append .txt to ensure it's a file name
        inFile.open();
        if (!inFile) {
            cerr << "No clothing information found for student ID " << id << endl;
            return;
        }

        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }

        inFile.close();
    }

    // Public method to set student ID (useful for loading data)
    void setID(const string& studentID) {
        id = studentID;
    }

    // Public method to get student ID
    string getID() const {
        return id;
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
    student.setID(studentID);
    student.loadFromFile();
}

void showMenu() {
    int choice;
    while (true) {
        cout << "\nDIGITAL CHECKOUT SYSTEM\n";
        cout << "1. Store Clothing Information\n";
        cout << "2. Check Clothing Information\n";
        cout << "3. Exit\n";
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

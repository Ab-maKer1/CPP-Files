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
        cin.ignore(); // Ignore leftover newline character
        cout << "Enter the student name: ";
        getline(cin, name);
        cout << "Enter the number of clothing items: ";
        cin >> numClothingItems;
        cin.ignore(); // Ignore leftover newline character
        for (int i = 0; i < numClothingItems; ++i) {
            cout << "Enter clothing type " << i + 1 << ": ";
            getline(cin, clothingTypes[i]);
            cout << "Enter clothing description " << i + 1 << ": ";
            getline(cin, clothingItems[i]);
        }
    }

    void saveToFile() {
        ofstream outFile(id + ".bin", ios::binary); // Open file in binary mode
        if (!outFile) {
            cerr << "Error opening file!" << endl;
            return;
        }

        int idSize = id.size();
        outFile.write(reinterpret_cast<char*>(&idSize), sizeof(idSize));
        outFile.write(id.c_str(), idSize);

        int nameSize = name.size();
        outFile.write(reinterpret_cast<char*>(&nameSize), sizeof(nameSize));
        outFile.write(name.c_str(), nameSize);

        outFile.write(reinterpret_cast<char*>(&numClothingItems), sizeof(numClothingItems));
        for (int i = 0; i < numClothingItems; ++i) {
            int typeSize = clothingTypes[i].size();
            outFile.write(reinterpret_cast<char*>(&typeSize), sizeof(typeSize));
            outFile.write(clothingTypes[i].c_str(), typeSize);

            int descSize = clothingItems[i].size();
            outFile.write(reinterpret_cast<char*>(&descSize), sizeof(descSize));
            outFile.write(clothingItems[i].c_str(), descSize);
        }

        outFile.close();
        cout << "Clothing information stored for student ID " << id << endl;
    }

    void loadFromFile(string& studentID) {
        ifstream inFile(studentID + ".bin", ios::binary); // Open file in binary mode
        if (!inFile) {
            cerr << "No clothing information found for student ID " << studentID << endl;
            return;
        }

        int idSize;
        inFile.read(reinterpret_cast<char*>(&idSize), sizeof(idSize));
        id.resize(idSize);
        inFile.read(&id[0], idSize);

        int nameSize;
        inFile.read(reinterpret_cast<char*>(&nameSize), sizeof(nameSize));
        name.resize(nameSize);
        inFile.read(&name[0], nameSize);

        inFile.read(reinterpret_cast<char*>(&numClothingItems), sizeof(numClothingItems));
        for (int i = 0; i < numClothingItems; ++i) {
            int typeSize;
            inFile.read(reinterpret_cast<char*>(&typeSize), sizeof(typeSize));
            clothingTypes[i].resize(typeSize);
            inFile.read(&clothingTypes[i][0], typeSize);

            int descSize;
            inFile.read(reinterpret_cast<char*>(&descSize), sizeof(descSize));
            clothingItems[i].resize(descSize);
            inFile.read(&clothingItems[i][0], descSize);
        }

        inFile.close();

        cout << "Clothing information for student ID " << studentID << ":" << endl;
        cout << "Name: " << name << endl;
        cout << "Clothing Items:" << endl;
        for (int i = 0; i < numClothingItems; ++i) {
            cout << "  - Type: " << clothingTypes[i] << ", Description: " << clothingItems[i] << endl;
        }
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


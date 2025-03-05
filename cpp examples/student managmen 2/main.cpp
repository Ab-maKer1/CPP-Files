#include <iostream>
#include <string>
#include <fstream>
class Student {
public:
    int studentID;
    std::string name;
    int age;
    std::string grade;
    std::string email;

    Student() : studentID(0), age(0) {}

    void setStudentDetails(int id, std::string n, int a, std::string g, std::string e) {
        studentID = id;
        name = n;
        age = a;
        grade = g;
        email = e;
    }

    void displayStudentDetails() const {
        std::cout << "Student ID: " << studentID << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Grade: " << grade << "\n";
        std::cout << "Email: " << email << "\n";
    }
};

class StudentManagement {
private:
    Student students[100]; // Assuming the system can manage up to 100 students
    int studentCount;

public:
    StudentManagement() : studentCount(0) {}

    void addStudent(const Student& student) {
        if (studentCount < 100) {
            students[studentCount] = student;
            ++studentCount;
        } else {
            std::cout << "System is full, cannot add more students.\n";
        }
    }

    void removeStudent(int id) {
        int index = -1;
        for (int i = 0; i < studentCount; ++i) {
            if (students[i].studentID == id) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            for (int i = index; i < studentCount - 1; ++i) {
                students[i] = students[i + 1];
            }
            --studentCount;
            std::cout << "Student removed successfully.\n";
        } else {
            std::cout << "Student not found.\n";
        }
    }

    void listAllStudents() const {
        for (int i = 0; i < studentCount; ++i) {
            students[i].displayStudentDetails();
            std::cout << "-------------------------\n";
        }
    }

    void updateStudentDetails(int id, const Student& updatedStudent) {
        for (int i = 0; i < studentCount; ++i) {
            if (students[i].studentID == id) {
                students[i] = updatedStudent;
                std::cout << "Student details updated successfully.\n";
                return;
            }
        }
        std::cout << "Student not found.\n";
    }

    void searchStudent(int id) const {
        for (int i = 0; i < studentCount; ++i) {
            if (students[i].studentID == id) {
                students[i].displayStudentDetails();
                return;
            }
        }
        std::cout << "Student not found.\n";
    }

    void saveToFile(const std::string& filename) const {
        std::ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << studentCount << "\n";
            for (int i = 0; i < studentCount; ++i) {
                outFile << students[i].studentID << "\n";
                outFile << students[i].name << "\n";
                outFile << students[i].age << "\n";
                outFile << students[i].grade << "\n";
                outFile << students[i].email << "\n";
            }
            outFile.close();
            std::cout << "Student information saved to file successfully.\n";
        } else {
            std::cout << "Failed to open file for writing.\n";
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream inFile(filename);
        if (inFile.is_open()) {
            inFile >> studentCount;
            inFile.ignore(); // Ignore the newline character after the student count
            for (int i = 0; i < studentCount; ++i) {
                std::getline(inFile, students[i].name);
                inFile >> students[i].studentID >> students[i].age;
                inFile.ignore(); // Ignore the newline character after age
                std::getline(inFile, students[i].grade);
                std::getline(inFile, students[i].email);
            }
            inFile.close();
            std::cout << "Student information loaded from file successfully.\n";
        } else {
            std::cout << "Failed to open file for reading.\n";
        }
    }
};
void displayMenu() {
    std::cout << "\n--- Student Management System ---\n";
    std::cout << "1. Add Students\n";
    std::cout << "2. Remove Students\n";
    std::cout << "3. List All Students\n";
    std::cout << "4. Update Student Details\n";
    std::cout << "5. Search Student\n";
    std::cout << "6. Save Student Information to File\n";
    std::cout << "7. Load Student Information from File\n";
    std::cout << "8. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    StudentManagement sm;
    int choice;
    std::string filename = "students.txt";

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                std::cout << "How many students do you want to add? ";
                std::cin >> num;
                for (int i = 0; i < num; ++i) {
                    int id, age;
                    std::string name, grade, email;
                    std::cout << "Enter Student ID: ";
                    std::cin >> id;
                    std::cout << "Enter Name: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, name);
                    std::cout << "Enter Age: ";
                    std::cin >> age;
                    std::cout << "Enter Grade: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, grade);
                    std::cout << "Enter Email: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, email);
                    Student student;
                    student.setStudentDetails(id, name, age, grade, email);
                    sm.addStudent(student);

                }
                break;
            }
            case 2: {
                int num;
                std::cout << "How many students do you want to remove? ";
                std::cin >> num;
                for (int i = 0; i < num; ++i) {
                    int id;
                    std::cout << "Enter Student ID to remove: ";
                    std::cin >> id;
                    sm.removeStudent(id);
                }
                break;
            }
            case 3: {
                sm.listAllStudents();
                break;
            }
            case 4: {
                int num;
                std::cout << "How many students do you want to update? ";
                std::cin >> num;
                for (int i = 0; i < num; ++i) {
                    int id, age;
                    std::string name, grade, email;
                    std::cout << "Enter Student ID to update: ";
                    std::cin >> id;
                    std::cout << "Enter New Name: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, name);
                    std::cout << "Enter New Age: ";
                    std::cin >> age;
                    std::cout << "Enter New Grade: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, grade);
                    std::cout << "Enter New Email: ";
                    std::cin >> std::ws;
                    std::getline(std::cin, email);

                    Student updatedStudent;
                    updatedStudent.setStudentDetails(id, name, age, grade, email);
                    sm.updateStudentDetails(id, updatedStudent);
                }
                break;
            }
            case 5: {
                int id;
                std::cout << "Enter Student ID to search: ";
                std::cin >> id;
                sm.searchStudent(id);
                break;
            }
            case 6: {
                sm.saveToFile(filename);
                break;
            }
            case 7: {
                sm.loadFromFile(filename);
                break;
            }
            case 8: {
                std::cout << "Exiting the system...\n";
                break;
            }
            default: {
                std::cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (choice != 8);

    return 0;
}

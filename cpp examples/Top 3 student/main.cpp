#include <iostream>
using namespace std;
class Student {
private:
    string name;
    double score;

public:
    // Constructor
    Student(string n, double s) : name(n), score(s) {}

    // Getters
    string getName() const {
        return name;
    }

    double getScore() const {
        return score;
    }

    // Display student details
    void display() const {
        cout << "Name: " << name << ", Score: " << score << endl;
    }
};

void sortStudents(Student students[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (students[j].getScore() < students[j + 1].getScore()) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int SIZE = 5;
    Student students[SIZE] = {
        Student("Alice", 95.5),
        Student("Bob", 89.2),
        Student("Charlie", 92.3),
        Student("David", 85.4),
        Student("Eve", 90.1)
    };

    // Sort students based on their scores in descending order
    sortStudents(students, SIZE);

    // Display the top 3 students
    cout << "Top 3 Students:" << endl;
    for (int i = 0; i < 3 && i < SIZE; ++i) {
        students[i].display();
    }

    return 0;
}

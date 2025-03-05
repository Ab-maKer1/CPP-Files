#include <iostream>

class MyClass {
public:
    static int count; // Static data member declaration

    MyClass() {
        count++; // Increment count for each object created
    }

    static void showCount() { // Static member function
        std::cout << "Count: " << count << std::endl;
    }
};

// Initialize the static data member within the class definition (C++11 and later)
int MyClass::count = 0;

int main() {
    MyClass obj1; // count is now 1
    MyClass obj2; // count is now 2
    MyClass obj3; // count is now 3

    MyClass::showCount(); // Access the static member function

    return 0;
}


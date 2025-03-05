#include <iostream>

// Function to check if a number is prime
void checkPrime() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        std::cout << "The number " << number << " is prime." << std::endl;
    } else {
        std::cout << "The number " << number << " is composite." << std::endl;
    }
}

int main() {
    checkPrime();
    std::cout << "Hello world!" << std::endl;
    return 0;
}
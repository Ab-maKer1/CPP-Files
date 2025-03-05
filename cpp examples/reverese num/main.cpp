#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;          // Get the last digit
        reversedNum = reversedNum * 10 + digit; // Append the digit to the reversed number
        num /= 10;                     // Remove the last digit from the original number
    }

    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}

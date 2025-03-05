#include <iostream>
#include <limits>

using namespace std;

int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

void print_fibonacci_recursive(int n) {
    cout << "Fibonacci sequence (recursive): ";
    for(int i=0; i<n; i++){
        cout<<fibonacci_recursive(i)<<" ";
    }
    cout<<endl;
}

int main() {
    int num;
    cout << "Enter the number of Fibonacci terms: ";
    while (!(cin >> num)) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear(); // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
    }

    cout << "The " << num << "th Fibonacci number is: " << fibonacci_recursive(num) << endl;

    print_fibonacci_recursive(num);
    return 0;
}

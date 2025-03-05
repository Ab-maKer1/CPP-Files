#include <iostream>


using namespace std;

int fibonacci_recursive(int n)
 {
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
 cin>>num;
    cout << "The " << num << "th Fibonacci number is: " << fibonacci_recursive(num) << endl;

    print_fibonacci_recursive(num);
    return 0;
}

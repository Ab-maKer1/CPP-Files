#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    if (num == 2) return true;  // 2 is the only even prime number
    if (num % 2 == 0) return false; // other even numbers are not primes

    // Check for factors from 3 to sqrt(num)
    for (int i = 3; i*i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
bool isComposite(int num) {
    if (num <= 1)
        return false; // 0 and 1 are not composite numbers
    if (num == 2) return false; // 2 is a prime number
       for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                return true; // If any divisor other than 1 and itself exists, it's composite
  }
  }
  return false; // If no divisors other than 1 and itself exist, it's not composite
    }
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
if (isComposite(num)) {
        cout << num << " is a composite number." << endl;
    } else {
        cout << num << " is not a composite number." << endl;
    }
    return 0;
}

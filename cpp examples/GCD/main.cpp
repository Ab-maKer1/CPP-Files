#include <iostream>

using namespace std;

// Function to compute GCD using recursion
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b){
return (a*b)/gcd(a,b);
}
int main() {
    int num1;
    int num2;
    cin>>num1>>num2;
    int result = gcd(num1, num2);
cout<<result;
int y=
    cout << "Hello world!" << endl;
    return 0;
}

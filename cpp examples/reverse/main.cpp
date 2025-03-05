#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter a name: ";
    getline(cin, name); // Use getline to read the entire input including spaces

    int n = name.length();

    // Reverse the string in place
    for (int i = 0; i < n / 2; ++i) {
        char temp = name[i];
        name[i] = name[n - i - 1];
        name[n - i - 1] = temp;
    }
    cout << "Reversed name: " << name << endl;
    int x=5,y=10,d,z;
    y=x/y;
    z=x%10;
cout<<y<<endl;
cout<<z<<endl;
    return 0;
}

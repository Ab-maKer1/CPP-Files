#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char x[30], y[10];
    cout<<"Enter a name"<<endl;
    cin>>x;
cout<<"Enter father name"<<endl;
    cin>>y;
    cout<<x<<" "<<y<<endl;
    strcat(x," alex");
    cout<<x<<endl;
    strncpy(x,y,2);
        cout<<x;

    cout << "Hello world!" << endl;
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

    return 0;
}

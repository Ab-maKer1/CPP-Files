#include <iostream>

using namespace std;

int main()
{
    int y;
    int &x=y;
    x=10;
        cout<<x<<" "<<y<<endl;
    int *p;
    p=&y;
    *p=100;
    cout<<x<<" "<<y<<" "<<*p<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

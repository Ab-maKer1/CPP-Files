#include <iostream>

using namespace std;
void multi(int &a, int &b, int &c){
a=8;
b=8;
c=8;
cout<<"the value of a "<<a<<endl;
cout<<"the value of b "<<b<<endl;
cout<<"the value of c "<<c<<endl;
}
int main()
{
    int x,y,z;
    cout<<"Enter second"<<endl;
    cin>>x>>y>>z;
    cout<<"the value of x, y, z"<<endl<<x<<endl<<y<<endl<<z;
    multi(x,y,z);
    cout<<"the value of x, y, z"<<x<<endl<<y<<endl<<z;
    return 0;
}

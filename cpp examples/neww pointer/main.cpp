#include <iostream>

using namespace std;

int main()
{
    int n=100;
    int*p;
    int **x;
    p=&n;
    x=&p;
    **x=20;
   cout<<n<<endl;
   cout<<p<<endl;
   cout<<*p<<endl;
*p=10;
cout<<endl;
cout<<n<<endl;
   cout<<p<<endl;
   cout<<*p<<endl;
    return 0;
}

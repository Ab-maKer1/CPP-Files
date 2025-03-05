#include <iostream>

using namespace std;
int Factorial(int n){
if(n<=1)
    return 1;
    return n*Factorial(n-1);
}
int decre(int n){
if(n<=0)
return n;
cout<<n<<" ";
return decre(n-1);// void if (n<=0) return; cout<<n<<" "; decre();
    return;
}
int main()
{
    double a,b,c;
    cout << "Enter a postive number" << endl;
cin>>a;
b=Factorial(a);
cout<<"the factorial is "<<b<<endl;
decre(a);
    return 0;
}

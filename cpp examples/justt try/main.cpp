#include <iostream>
#include <iomanip>
using namespace std;
 void large(){
    int a[10];
    int i;
    cout<<"Enter 10 numbers"<<endl;
    for(i=0; i<10; i++){
    cin>>a[i];
}
int largest=a[i];
for(int i=0; i<10; i++){
  if(largest<a[i])
        largest=a[i];
}
cout<<largest<<endl;
 }
 int factorial(int n){
 if(n<=1)
    return 1;
 return n*factorial(n-1);
 }



 int fibonnaci(int n){
 if(n<=1)
    return n;
 else
    return fibonnaci(n-1)+fibonnaci(n-2);
 }
 void sequencFibo(int n){
 for(int i=0;i<=n;i++){
   cout<<fibonnaci(i);
 }
 }

int main()
{int n;
     cout<<"Enter fibonaccci term"<<endl;
cin>>n;
    int a=0;
    int b=1;
    int fib;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<=n;i++ ){
     fib=a+b;
     a=b;
     b=fib;
     cout<<fib<<"  ";
    }
    cout<<factorial(5)<<endl;
    double x=6%9;
    cout<<x;
    cout << "Hello world!" << endl;
    cout<<"hi"<<setw(10);
    cout.fill('-');
    cout<<"bye";
    return 0;
}

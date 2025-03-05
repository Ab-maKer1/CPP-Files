#include <iostream>

using namespace std;

int main()
{int n;
cout<<"Enter a the fibonacci term"<<endl;
cin>>n;
    int a,b,next;
    a=0;
    b=1;
    cout<<" Fibonacci series "<<endl;
    for(int i=0; i<n; i++){
        if(i<=1){
            next=i;
        }
        else
      next =a+b;
      a=b;
      b=next;
      cout<<next<<" ";
    }
    cout << "Hello world!" << endl;
    return 0;
}

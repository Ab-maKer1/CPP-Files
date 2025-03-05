#include <iostream>

using namespace std;
void OrE(int a){
if(a%2==1){
    cout<<"The number is odd"<<endl;
    return ;
}
cout<<"The number is even"<<endl;
}
void check(double a, double b, double c){
double sum=a+b+c;
cout<<"the sum is"<<sum<<endl;
}
int main()
{
    cout << "Hello world!" << endl;
   int x;
   cout<<"enter a number"<<endl;
   cin>>x;
   OrE(x);
   int p,y,z;
   cout<<"ENter a num "<<endl;
   cin>>p>>y>>z;
   check(p,y,z);
    return 0;
}

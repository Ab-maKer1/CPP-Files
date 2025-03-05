#include <iostream>

using namespace std;
int sum(int a, int b){
int x=a+b;
return x;
}
int result(int a,int b){

return sum(a,b);
}
int main()
{ int v,b;
cout<<"Enter two number to add"<<endl;
cin>>v>>b;
    cout<<result(v,b)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

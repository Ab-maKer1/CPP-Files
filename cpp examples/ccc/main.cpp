#include <iostream>

using namespace std;
bool check(string n){
if(n=="Abdi")
    return true;
else
    return false ;
}
int main()
{
    string y,x;
    y="Abdi";
    cout<<"Enter ur name"<<endl;
    cin>>x;

    cout<<"The given username is"<<check(x);


    return 0;
}

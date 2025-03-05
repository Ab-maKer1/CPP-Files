#include <iostream>

using namespace std;

int main()
{
    int *x;
    int n;
    cout<<"enter array szie"<<endl;
    cin>>n;
    x=new int[n];
    cout<<"ENTER ELEMENTS OF ARRAY"<<endl;
    for(int i=0; i<n; i++){
    cin>>*(x+i);
    }
    cout << "Hello world!" << endl;
    for(int i=0; i<n; i++){
    cout<<x[i];
    }
    return 0;
}

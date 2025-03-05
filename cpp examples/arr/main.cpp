
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int x[5];
    cout <<"enter number of arrays "<<endl;
    for(int i=0; i<5; ++i){
        cin>>x[i];
    }
cout<<"The numbers u entered "<<endl;
    for(int i=0; i<5; ++i){
cout<<x[i]<<endl;
    }
cout<<"the largest is "<<endl;
int max=x[0];
    for(int i=0; i<5; ++i){
if(max<x[i])
    max=x[i];
    }
    cout<<max;
    cout<<"the smallest number"<<endl;
    int min =x[0];
    for(int i=0; i<5; ++i){
   if( min>=x[i])
    min=x[i];
    }
    cout<<min<<endl;;
    for(int i=0; i<=7; ++i){
    x[7]=10;
    cout<<x[7]<<endl;
    }
    cout<<x;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int x[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<5;i++){
        int temp;
        temp=x[i];
        x[i]=x[9-i];
        x[9-i]=temp;
    }
    for(int i=0;i<10;i++){
    cout<<x[i]<<" ";
}
return 0;
}

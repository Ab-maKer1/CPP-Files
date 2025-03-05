#include <iostream>

using namespace std;

int main()
{
    int x[10]={0,1,2,3,4,5,6,7,8,9};
    int temp;
    for(int i=0; i<10/2;i++){
        temp=x[i];
        x[i]=x[9-i];
        x[9-i]=temp;
    }
        for(int i=0; i<10;i++){
                cout<<x[i]<<" ";
        }
    cout << "Hello world!" << endl;
    return 0;
}

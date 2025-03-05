#include <iostream>

using namespace std;

void large(int a[2][2]){
 int max;
    cout<<"max numeber in each column"<<endl;
    for (int i=0; i<2;i++){
        max=a[0][i];
        for(int j=0; j<2; j++){
            if(max<a[j][i])
                max=a[j][i];
        }
        cout<<a<<endl;
    }
    cout<<"max numeber in each row"<<endl;
    for (int i=0; i<2;i++){
        max=a[i][0];
        for(int j=0; j<2; j++){
            if(max<a[i][j])
                max=a[i][j];
        }
        cout<<a<<endl;
    }
}
int main()
{
    int y[2][2];
large(y);
string x;
x="blank";
x.erase(0,1);
cout<<x<<endl;
    char xc[100];
    cin.getline(xc,100);

    cout << "Hello world!" << endl;
    return 0;
}

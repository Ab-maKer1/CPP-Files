#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the row and column of the array "<<endl;
    cin>>a>>b;
   int x[a][b];
cout<<"Enter number of arrys "<<endl;
for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
cin>>x[i][j];
}
}
for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
cout<<x[i][j]<<" ";
}
cout<<endl;
}
int max;
for(int i=0;i<a;i++){
    max=x[i][0];
    for(int j=0;j<b; j++){
      if(max<x[i][j])
            max=x[i][j];
    }
        cout<<"The maximum number in each row: "<<max<<endl;

    }
    for(int i=0;i<a;i++){
    max=x[0][i];
    for(int j=0;j<b; j++){
      if(max<x[j][i])
            max=x[j][i];
    }
        cout<<"The maximum number in each column is: "<<max<<endl;

    }
    return 0;
}

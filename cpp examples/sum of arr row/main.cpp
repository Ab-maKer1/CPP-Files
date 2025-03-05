#include <iostream>

using namespace std;

int main()
{
    char r[] = "abc";
char c[]= {'a', 'b', 'c'};
cout<<r[2]<<endl;
cout<<c[0]<<endl;

    int x=10,y=10;
    cout<<"Enter number for row and column"<<endl;
    cin>>x>>y;
    int b[x][y];
    cout << "Enter number of arrays "<<endl;
    for(int i=0; i<x; i++){
        for(int j=0;j<y; j++){
            cin>>b[i][j];
    }}
    cout<<"the numbers u enterd "<<endl;
    for(int i=0 ;i<x; i++){
        for(int j=0; j<y; j++){
        cout<<b[i][j]<<"  ";
    }
    cout<<endl;
    }
    int sum;
    cout<<"The sum of the rows are "<<endl;
    for(int i=0 ;i<x; i++){
        sum=0;
        for(int j=0; j<y; j++){
        sum+=b[i][j];
    }
    cout<<sum<<endl;
    }
    cout<<"The sum of the columns are "<<endl;
    for(int i=0 ;i<x; i++){
        sum=0;
        for(int j=0; j<y; j++){
        sum+=b[j][i];
    }
    cout<<sum<<endl;
    }
    int max=b[0][0];
    cout<<"The largest number is  "<<endl;
    for(int i=0 ;i<x; i++){
        for(int j=0; j<y; j++){
        if(max<b[i][j])
            max=b[i][j];
    }}
    cout<<max<<endl;
    int min=b[0][0];
    cout<<"The smallest number is  "<<endl;
    for(int i=0 ;i<x; i++){
        for(int j=0; j<y; j++){
        if(min>b[i][j])
            min=b[i][j];
    }
    }
    cout<<min<<endl;
    cout<<"The smallest number in each column "<<endl;
    for(int i=0 ;i<x; i++){
                int min=b[0][i];

        for(int j=0; j<y; j++){
        if(min>b[j][i])
            min=b[j][i];
    }
    cout<<min<<endl;
    }
    cout<<"The smallest number in each row "<<endl;
    for(int i=0 ;i<x; i++){
                int min=b[i][0];

        for(int j=0; j<y; j++){
        if(min>b[i][j])
            min=b[i][j];
    }
    cout<<min<<endl;
    }
    return 0;
}

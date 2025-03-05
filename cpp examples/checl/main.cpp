#include <iostream>

using namespace std;

int main()
{
    char names[5][15] ={"Peter", "Mary", "Lisa", "John", "George-Simon"};
for(int i=0;i<5;i++){
    for(int j=0;j<15;j++)
    {
      cout<<names[i][j]<<" ";
    }
    cout<<endl;
}

    int board[4][3] = {{2,3,5},{6, 1, 15}, {25, 13, 20}, {4, 7, 11}};
    cout << "Hello world!" << endl;
    cout<<"the elemenets of then array "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
                if(i==2){
                 board[2][j] =0;
                }
        cout<<board[i][j]<<"  ";
    }
    cout<<endl;
}
string p=" abditadesse";
string k;
getline(cin,k);
cout<<k<<endl;
k.insert(0,p);
cout<<k<<endl;
k.erase(6);
cout<<k;
return 0;
}


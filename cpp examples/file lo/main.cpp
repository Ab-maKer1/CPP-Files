#include <iostream>
#include<fstream>
using namespace std;

int main()
{int x,y
    fstream my ne;
    my.open("file", ios::app);
    for(int i=0;i<5;i++ ){
        char x;
        cin>>x;
        my.put(x);           //my<<x<<endl;       my.put(x)<<endl;   my.put()
        my.put('\n');
    }
    return 0;
}

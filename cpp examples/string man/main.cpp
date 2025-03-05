#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string h;
cout<<"Enter a thing"<<endl;
getline(cin,h);
cout<<h[0];
    cout << "Hello world!" << endl;
    string str1,str2,str3;
    str1="Software ";
    str2="Engineering";
    str3 = str1 + str2;
     cout << str3<<endl;
     str1.find(str2);
     cout<<str1<<endl;
str1.insert(1, str2);
cout<<str1<<endl;
str1.erase(0, 3);
cout<<str1<<endl;
str1.find(str2);

    return 0;
}

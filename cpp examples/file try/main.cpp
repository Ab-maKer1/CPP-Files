#include<iostream>
#include<fstream>
#include<string>

 using namespace std;

int main(){
   fstream my;
   /* my.open("text", ios::out);
    my<<"my name is kkkkk\n";
    my<<"jjjj\n";
        my.close();
    my.open("text", ios::app);
    my<<"Not kkk\n";
    my.close();*/
    my.open("text", ios::in);
    string x;
    while(getline(my,x)){
    cout<<x;
    cout<<endl;
    }
    my.close();
    return 0;
}

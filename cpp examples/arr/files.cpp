#include<iostream>
#include<fstream>
#include<string>

 using namespace std;

int man(){
    fstream my;
    my.open("ttext", ios::out);
    my<<"my name is kkkkk\n";
    my<<"Not kkk\n";
    my.close();
    my.open("ttext", ios::in);
    string x;
    my>>x;
    cout<<x;
    return 0;
}
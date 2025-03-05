#include <iostream>
#include <fstream>
using namespace std;

int main() {
    long z, y,x;
    string h;
    ofstream ne;
    ne.open("texe.txt", ios::app); // Fixed filename
    ne << "my name AAAAAAAAA";    //
    y = ne.tellp();// 18// Use tellp() for output streams    // if there is endl it usese +1 so it wiil be 19
    cout << y<<endl;
    ne.seekp(2,ios::beg);
    ne<<"hello"<<endl;
    ne.close();
fstream nv;
    nv.open("texe.txt", ios::in|ios::out); // Fixed filename
    z = nv.tellg(); // Use tellp() for output streams
    cout << z<< endl;
    nv.seekg(3); // 0 1 2 3 4 5 6 7 8 9------
    char c;
    nv.get(c);
    cout<<c<<endl;
    nv.seekg(3,ios::beg);
    getline(nv,h);
    cout<<h<<endl;
    nv.seekp(2,ios::beg);
    nv<<"hello"<<endl;
    nv.close();
    return 0;
}


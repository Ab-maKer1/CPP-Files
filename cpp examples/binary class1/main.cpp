#include <iostream>
#include <fstream>
using namespace std;
class rectangle{
private:
    int l;
    int w;
    int a;
public:
    void getf(){
    cout<<"enter a length"<<endl;
    cin>>l;
    cout<<"Enter a width"<<endl;
    cin>>w;
    }
    void display(){
    a=l*w;
    cout<<"The area of the rectangle is "<<a<<endl;
    }
};
int main()
{
    rectangle r1;
    ofstream of("binary1.dat", ios::binary);
r1.getf();
of.write((char*)&r1, sizeof(r1));
of.close();
ifstream f;
f.open("binary1.dat", ios::binary);
f.read((char*)&r1, sizeof(r1));
r1.display();
f.close();
    cout << "Hello world!" << endl;
    return 0;
}

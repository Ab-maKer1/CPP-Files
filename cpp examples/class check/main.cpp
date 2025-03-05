#include <iostream>

using namespace std;
class car{
public:
    void setcar(string n,string y,int z){
      type=n;
      color=y;
      x=z;
    }
    string gettype(){
    return type;
    }
    string getcolor(){
    return color;
    }
    int getcode(){
    return x;
    }
    void display(){
    cout<<"The type of the car :"<<gettype()<<" The color of the car :"<<getcolor()<<" The code of the car : "<<getcode();
    }
private:
    string type;
    string color;
    int x;

};
int main()
{
     string a, b;
     int c;
    cout<<"Enter a car type"<<endl;
    getline(cin,a);
     cout<<"Enter a car colour"<<endl;
     getline(cin,b);
      cout<<"Enter a car code"<<endl;
      cin>>c;
    car c1;
    c1.setcar(a,b,c);
    c1.display();
    return 0;
}

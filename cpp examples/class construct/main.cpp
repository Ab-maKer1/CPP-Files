#include <iostream>

using namespace std;
class name{
public:
    name();
    name(int x);
    name(int x,int y);

    void value(){
    cout<<"The value of length :"<<l<<" "<<"The value of width :"<<w<<endl;
    }
    int display(){
    return l*w;
    }
private:
    int l,w;

};
 name::name(){
    l=10;
    w=12;
    }
    name::name(int x){
    l=x;
    w=x;
    }
    name::name(int x,int y){
    l=x;
    w=y;
    }
int main()
{
    name h;
    name h1(5);
    name h2(10,6);
    h.value();
    h1.value();
    h2.value();
    cout<<"The area of the rectangle"<<h.display()<<endl;
    cout<<"The area of the rectangle"<<h1.display()<<endl;
    cout<<"The area of the rectangle"<<h2.display()<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

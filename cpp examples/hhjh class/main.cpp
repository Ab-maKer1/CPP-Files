#include <iostream>

using namespace std;
class rectangle{
private:
    int length;
    int width;
    int area;
public:
    ~rectangle(){
    cout<<"this is destructor "<<endl;}
    rectangle(){
    length=10;
    width=10;
    }
    rectangle(int n,int x){
    length=n;
    width=x;
    }
    rectangle(rectangle &x){
    length=x.length;
    width=x.width;
    }
    void setf(int n, int x){
      length=n;
      width=x;
}
void display(){
area=length*width;
cout<<"The area of the rectangle is "<<area<<endl;
}
};
int main()
{
    rectangle r1;
    r1.display();
    r1.setf(4,4);
    r1.display();
    rectangle r2(2,3);
    r2.display();
    r2.setf(6,6);
    r2.display();
    rectangle r3=r2;
    r2.display();
    cout << "Hello world!" << endl;
    return 0;
}

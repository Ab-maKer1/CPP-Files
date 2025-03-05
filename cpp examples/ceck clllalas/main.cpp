#include <iostream>

using namespace std;
class Rectangle{
    private:
    int width,length;
public:
    Rectangle(int l, int w){
        length=l;
        width=w;
    }
    void setle(int l){
    length=l;
    }
    void setwi(int w){
    width=w;
    }
    int getwidth(){

    return width;
    }
    int getle(){
    return length;
    }
    void display(){
    cout<<"The lenght :"<<length<<" The width :"<<width<<endl;
    }
};
void changeRe(Rectangle &r,int n, int l ){
r.setle(n);
r.setwi(l);
}
void displayRe(Rectangle r){
r.display();
}
int main()
{
 Rectangle R(5,6);
 R.display();
 changeRe(R,3,4);
 displayRe(R);

    return 0;
}

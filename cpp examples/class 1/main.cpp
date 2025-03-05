#include <iostream>

using namespace std;
class rectangle{
private:
    double length;
    double width;
public:
void setwidth(double n){
width=n;
}
void setlength(double n){
length=n;}
double getwidth(){
 return width;
}
double getlength(){
return length;
}
double area (double , double ){
return getlength() * getwidth();
}
};
int main()
{
    double a,b;
    cout<<"Enter the length and width "<<endl;
cin>>a>>b;
    rectangle x;
    x.setlength(a);
    x.setwidth(b);
    cout<<x.area(a,b);

    cout << "Hello world!" << endl;
    return 0;
}

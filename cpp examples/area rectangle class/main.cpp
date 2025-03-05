#include <iostream>

using namespace std;
class rectangle{
private:
    int length;
    int width;
    int area;
public:
    rectangle(int x ,int y){
    length=x;
    width=y;
    }
    void setf(){
    cout<<"Enter length"<<endl;
    cin>>length;
    cout<<"Enter a width"<<endl;
    cin>>width;
    }
    void getf(int n,int x){
        length=n;
        width=x;
    }
    void display(){
        area = length*width;
    cout<<"The area of the rectangle is "<<area<<endl;
    }
};
int main()
{int a,b;
    rectangle r1[3]={rectangle(2,3),rectangle(3,4),rectangle(5,6)};
    for(int i=1; i<=3; i++){
            cout<<"Enter a lenght and width"<<endl;
    cin>>a>>b;
    cout<<"Area of rectangle"<<i<<endl;
    r1[i].getf(a,b);
    r1[i].display();
    }
    cout << "Hello world!" << endl;
    return 0;
}

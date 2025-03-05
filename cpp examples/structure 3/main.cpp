#include <iostream>
#include<cstring>
using namespace std;
struct student{
char name[50];
int age;
float mark;
}x={"abdi",20,99};

void St(student *x){
    char y[50];
    cout<<"Enter a name ="; cin.get(y,50);
cout<<"Enter a age =";cin>>x->age;
cout<<"Enter a mark =";cin>>x->mark;
strcpy((*x).name,y);

cout<<"the a name"<<x->name<<endl;
cout<<"the a age"<<x->age<<endl;
cout<<"the a mark"<<x->mark<<endl;
}
int main()
{
     cout<<x.name<<endl;
    cout<<x.age<<endl;
    cout<<x.mark<<endl;
  St(&x);
    cout << "Hello world!" << endl;
    cout<<x.name<<endl;
    cout<<x.age<<endl;
    cout<<x.mark<<endl;

    return 0;
}


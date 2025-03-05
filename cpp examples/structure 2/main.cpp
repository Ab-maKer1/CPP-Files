#include <iostream>
#include<cstring>
using namespace std;
struct student{
char name[50];
int age;
float mark;
}x={"abdi",20,99};

void St(student *x){
strcpy((*x).name,"tadess");
(*x).age=19;
(*x).mark=67;
cout<<"Enter a name"<<x->name<<endl;
cout<<"Enter a age"<<x->age<<endl;
cout<<"Enter a mark"<<x->mark<<endl;
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

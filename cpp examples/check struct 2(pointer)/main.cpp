#include <iostream>

using namespace std;
struct student{
string name;
int age;
double mark;
int id;
};
void regster(student *x){
cout<<"Enter a name"<<endl;
getline(cin,x->name);
cout<<"Enter a age"<<endl;
cin>>x->age;
cout<<"Enter a id"<<endl;
cin>>x->id;
cout<<"Enter a mark"<<endl;
cin>>x->mark;
}
void display(student *x){
cout<<"Name :"<<x->name<<endl;
cout<<"Age :"<<x->age<<endl;
cout<<"ID :"<<x->id<<endl;
cout<<"Mark :"<<x->mark<<endl;
}
int main()
{
    student s1;
    s1={"borif",20,98,3333};
    regster(&s1);
    display(&s1);
    cout << "Hello world!" << endl;

    return 0;
}

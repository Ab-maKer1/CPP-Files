#include<iostream>

using namespace std;

struct student{
string name;
int age;
double mark;
int id;
};
student Register(){
    student s1;
cout<<"Enter a name :"<<endl;
getline(cin,s1.name);
cout<<"Enter a age :"<<endl;
cin>>s1.age;
cout<<"Enter a id :"<<endl;
cin>>s1.id;
cout<<"Enter a mark :"<<endl;
cin>>s1.mark;
return s1;
}
int main(){

    student s1,x;
    x=Register();
    cout<<"The student name :"<<x.name<<endl;
    cout<<"The student age :"<<x.age<<endl;
    cout<<"The student id :"<<x.id<<endl;
    cout<<"The student mark :"<<x.mark<<endl;
return 0;
}

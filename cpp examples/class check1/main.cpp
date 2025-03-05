#include <iostream>

using namespace std;
class Student{
    public:
string name;
int age;
double mark;
void display(){
cout<<"Student name :"<<name<<endl;
cout<<"Student age :"<<age<<endl;
cout<<"Student mark :"<<mark<<endl;
}
};
int main()
{
    Student s1[2], s2;
    for(int i=0; i<2; i++ ){
        cout<<"Enter student name"<<endl;
        getline(cin,s1[i].name);
         cout<<"Enter student  age "<<endl;
         cin>>s1[i].age;
          cout<<"Enter student mark "<<endl;
        cin>>s1[i].mark;
    }
    for(int i=0; i<2;i++){
        s1[i].display();
    }
    s2.name="Kebde";
    s2.age=30;
    s2.mark=98.0;
    s2.display();
    return 0;
}

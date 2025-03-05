#include <iostream>

using namespace std;
struct student{
char name[50];
int age ;
int grade;
};
 struct Student{
string name;
};
int main()
{student s1={"andi", 20,99} ,s2={"abex",34,58};
    cout<<s1.name<<" "<<s1.age<<" "<<s1.grade<<endl;
   s2=s1;
   cout<<s2.name;
    cout << "Hello world!" << endl;

Student v;
Student *sptr;
sptr=&v;
(*sptr).name="Borif";
cout<<(*sptr).name<<endl;
cout<<&sptr;
    return 0;
}

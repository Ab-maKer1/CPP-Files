#include <iostream>

using namespace std;
struct student{
char name[50];
int age;
float mark;
}x;

void St(const char name[], int age, float mark){
cout<<"Enter a name"<<name<<endl;
cout<<"Enter a age"<<age<<endl;
cout<<"Enter a mark"<<mark<<endl;
}
int main()
{
  student x={"abdi",20,99} ;
  St(x.name,x.age,x.mark);

    cout << "Hello world!" << endl;
    return 0;
}

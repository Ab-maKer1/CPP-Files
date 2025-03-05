#include <iostream>
using namespace std;

// Define a structure and create a type alias using typedef
typedef struct x{
    string name;
    int age;
} Person;
struct Emplyee
{
  char name[20];
  int ssn;
  float salary;
  struct date
   {
      int day;
      int month;
      int year;
     }doj;
}emp;

int main() {
    // Create an instance of the Person structure
   Emplyee
   emp={"Borif",1000,1000.50,{22,6,2016}};

cout<<" Employee Name:"<<emp.name;
    cout<<"\n Employee SSN:"<<emp.ssn;
    cout<<"\n Employee  Salary:"<<emp.salary;
    cout<<"\n Employee DOJ:"<<emp.doj.day<<"/"<<emp.doj.month<<"/"<<emp.doj.year;

    Person p;
    p.name = "Alice";
    p.age = 30;

    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;

    return 0;
}

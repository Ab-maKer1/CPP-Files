#include <iostream>

using namespace std;
struct Emplyee
{
  char name[20];
  int ssn;
  float salary;};
  struct date
   {
      int day;
      int month;
      int year;
    Emplyee emp; }doj;

int main()
{Emplyee emp={"Borif",1000,1000.50};
doj={22,6,2016,emp};
cout<<" Employee Name:"<<doj.emp.name;
    cout<<"\n Employee SSN:"<<doj.emp.ssn;
    cout<<"\n Employee  Salary:"<<doj.emp.salary;
    cout<<"\n Employee DOJ:"<<doj.day<<"/"<<doj.month<<"/"<<doj.year;

    cout << "Hello world!" << endl;
    return 0;
}

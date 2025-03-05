#include <iostream>

using namespace std;

struct Employee{
   char name[25];
   int ssn;
   float salary;
   struct date
    {
         int day;
         int month;
         int year;
}doj;
};

int main()
{ typedef Employee x;
    x emp={"Borif",1000,1000.50,{22,6,2016}};

    cout<<"\n Employee Name:"<<emp.name;
    cout<<"\n Employee SSN:"<<emp.ssn;
    cout<<"\n Employee  Salary:"<<emp.salary;
    cout<<"\n Employee Day:"<<emp.doj.day<<endl;
    cout<<"\n Employee month"<<emp.doj.month<<endl;
   cout<<"\n Employee year"<<emp.doj.year<<endl;
    return 0;
}

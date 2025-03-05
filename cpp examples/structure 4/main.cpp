#include <iostream>

using namespace std;

struct Employee{
   char name[25];
   int ssn;
   float salary;
   }doj={"Borif",1000,1000.50};
   struct date
    {
         int day;
         int month;
         int year;
       Employee doj={"Borif",1000,1000.50};
}emp={22,6,2016};

int main()
{
    cout<<"\n Employee Name:"<<emp.doj.name;
    cout<<"\n Employee SSN:"<<emp.doj.ssn;
    cout<<"\n Employee  Salary:"<<emp.doj.salary;
    cout<<"\n Employee DOJ:"<<emp.day<<" "<<emp.month<<" "<<emp.year;

    cout << "Hello world!" << endl;
    return 0;
}

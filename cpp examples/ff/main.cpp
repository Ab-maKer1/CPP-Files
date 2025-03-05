#include <iomanip>
#include <iostream>
using namespace std;
int main()
{ double num = 30,x=9.876454353;
cout << "Original Number: " << num << endl;
cout << "Number after setting width: " << setw(10) << num << endl;
 cout << "Original number: " << setw(20) << num << endl;
 cout << "Number after setting the fill character to $: " << setw(18)<<setfill('_')<< num << endl;
 cout<<"the number after precision is "<<setprecision(3)<<x<<endl;
 cout << left << setw(10) << "Name";
cout  << setw(10) << "Age";
cout  << setw(10) << "City" << endl;
cout  << setw(10) << "John";
cout  << setw(10) << 25;
cout  << setw(10) << "New York" << endl;
cout  << setw(10) << "Emily";
cout  << setw(10) << 30;
cout  << setw(10) << "London" << endl;

cout << setw(10) << "Name" << setw(10) << "Age" << setw(10) << "City" << endl;
 cout << setw(10) << "John" << setw(10) << 25 << setw(10) << "New York" << endl;
cout << setw(10) << "Emily" << setw(10) << 30 << setw(10) << "London" << endl;

 return 0; }

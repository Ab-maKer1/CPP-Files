#include <iostream>
 #include <cmath>
 #include<iomanip>
 using namespace std;
int main() {
double s = sqrt(25.0);
 cout << s << endl;
double p = pow(2.0, 3.0);
cout << p << endl;
int a = abs(-10);
cout << a << endl;
double f = floor(3.8);
cout<< f << endl;
 double c = ceil(3.2);
cout << c << endl;
cout << left<< setw(10) << "Name" << setw(10) << "Age" << setw(10) << "City" << endl;
cout << setw(10) << "John" << setw(10) << 25 << setw(10) << "Nnnnnnew York" << endl;
cout << setw(10) << "Emily" << setw(10) << 30 << setw(10) << "London" << endl;
cout<<"\n \n";

cout  <<"Name"<<cout.width(10);
cout << "Age"<<cout.width(10);
cout  << "City" <<cout.width(10)<<endl;
cout   << "John"<<cout.width(10);
cout   << 25<<cout.width(10);
cout    << "New York" << cout.width(10)<<endl;
cout    << "Emily"<<cout.width(10);
cout    << 30<<cout.width(10);
cout    << "London" << endl;
return 0;
}

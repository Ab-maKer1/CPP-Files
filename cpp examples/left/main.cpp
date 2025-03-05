#include <iostream>
#include <iomanip>
using namespace std;
int add( int a, int b ){
    a = 7;
	int sum = a+b;

        return sum;}
int main()
{
    cout << "Hello world!" << endl;
cout << left<<setw(10) << "Name"<< setw(10) << "Age"<< setw(10) << "City" << endl;
cout  << setw(10) << "John"<< setw(10) << "25"<< setw(10) << "New York" << endl;
cout  << setw(10) << "Emily"<< setw(10) << "30"<< setw(10) << "London" << endl;
cout<<100;
	int n1 = 5, n2 = 6,x;
	x=add(n1,n2);
	cout<<"the sum is"<<x<<endl;
	cout << n1 << endl;

    return 0;
}

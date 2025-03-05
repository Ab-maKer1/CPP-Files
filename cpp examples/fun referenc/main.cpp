//  for loop to print out index
#include <iostream>
using namespace std;
void dbl(int& a, int& b){
	a/= 2;
	b/= 2;}
void trip(int &a, int &b){
	a*=3;
	b*=3;}
int main(){
int x = 4, y = 6;
cout << "AT START:" << endl;
cout << "x= " << x << " y= " << y << endl;
//call the dbl function:
dbl(x,y);
cout << "AFTER DBL CALL:" << endl;
cout << "x= " << x << " y= " << y << endl;
//call the trip function:
trip(x,y);
cout << "AFTER TRIP CALL:" << endl;
cout << "x= " << x << " y= " << y << endl;
cout<<"hi";
cout.width(20);
cout<<"bye";
cout << "Hi!";
cout.width(14);
cout.fill('-');
cout << "Bye!";
char line[8];
cout << "Please enter a string no more than 100 characters:\n";
cin.getline(line, 8, '-');

return 0;
}


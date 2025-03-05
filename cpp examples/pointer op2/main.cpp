#include <iostream>

using namespace std;

int main()
{
int *first = new int;
int *second;
*first = 85;
second = first;
*second = *second + *first;
first = new int;
*first = *second - 100;
cout << *first << " " << *second << endl;

double *firstPtr = new double; //Line 1
double *nextPtr = new double; //Line 2
*firstPtr = 62; //Line 3
nextPtr = firstPtr; //Line 4
delete firstPtr; //Line 5
delete nextPtr; //Line 6
firstPtr = new double; //Line 7
*firstPtr = 28; //Line 8
cout << *firstPtr << " " << *nextPtr << endl; //Line 9

    return 0;
}

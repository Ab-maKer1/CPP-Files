#include <iostream>

using namespace std;

int main()
{
    int numbers[5];
int * p;
p = numbers;  *p = 10;
p++;  *p = 20;
p = &numbers[2];  *p = 30;
p = numbers + 3;  *p = 40;
p = numbers;  *(p+4) = 50; // or *(p+1)=50
for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
    cout<<endl;
    int array_size = 10;
		int *a;
	a = new int[array_size];
		int i;
	for (i = 0; i < array_size; i++)
		 *(a + i) = i;
	for (i = 0; i < array_size; i++)
		 cout << a[i] << " ";
		cout << endl;


    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x[]={1,2,3,4,5,6,7,8,9};
    int *p;
    p=x;
    for(int i=0 ; i<9; i++)//assume &x=100;
        cout<<x[i]<<"\t";
        cout<<endl;
          ++p;// 100+4 =&x[1]
    *p=10;
    for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;
    p=&x[1]; // p=104
    *p=20;
    for(int i=0 ; i<9; i++) // assume &x=100;
        cout<<x[i]<<"\t";
        cout<<endl;
        *(p+2)=30;     //p=104 + 2(4)  p=112  p=&x[3]
        for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;

        p=p+3;   // p=104 + 3(4) p=116  p=&x[4]
        *p=40;
        for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;
        p++;
        p=x;     // we are resting the addres of p to x so the increment has no value
     *(p+5)=50;
     for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;

cout<<"THE NEW"<<endl;
p=x;
 *p=10;
    for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;
    p=&x[1]; // p=104
    *p=20;
    for(int i=0 ; i<9; i++) // assume &x=100;
        cout<<x[i]<<"\t";
        cout<<endl;
        p=x;
        *(p+2)=30;
        for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;

        p=p+3;
        *p=40;
        for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;
     *(p+4)=50;
     for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;
*(p+5)=60;
     for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;
        *(p+6)=70;
     for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;
        *(p+7)=80;
     for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;
        *(p+8)=90;
     for(int i=0 ; i<9; i++)
        cout<<x[i]<<"\t";
        cout<<endl;


    return 0;
}

#include <iostream>

using namespace std;
typedef struct date{
int day;
int month;
int year;
}record;
void printdate(date x){
cout<<"day of birth"<<x.day<<endl;
cout<<"month of birth"<<x.month<<endl;
cout<<"year of birth"<<x.year<<endl;

}
date print(date &y){
cout<<"Enter day of birth :";
    cin>>y.day;
    cout<<"Enter month of birth :";
    cin>>y.month;
    cout<<"Enter year of birth :";
    cin>>y.year;
    return y;

}
int main()
{

    /*
    date z,t;
    z=print(t);
    cout<<"Day of birth is :";
    cout<<z.day;
    cout<<"Month of birth is :";
    cout<<z.month;
    cout<<"Year of birth is :";
    cout<<z.year;


cout<<endl;
    cout<<"Day of birth is :"<<t.day<<endl;
    cout<<"Month of birth is :"<<t.month<<endl;
    cout<<"Year of birth is :"<<t.year<<endl;
    return 0;
   /* date Bdate;
    cout<<"Enter day of birth :";
    cin>>Bdate.day;
    cout<<"Enter month of birth :";
    cin>>Bdate.month;
    cout<<"Enter year of birth :";
    cin>>Bdate.year;
    cout << "Hello world!" << endl;
    printdate(Bdate);
    return 0;
    */
}

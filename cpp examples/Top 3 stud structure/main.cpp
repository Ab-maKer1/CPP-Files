#include <iostream>

using namespace std;
struct student{
char name[40];
int mark;
};
int main()
{
    student temp;
    const int size=5;
    student s[size];
    for(int i=0; i<size;i++){
        cout<<"Enter student name"<<endl;
        cin.ignore();
        cin.get(s[i].name,40);
        cout<<"Enter student mark"<<endl;
        cin>>s[i].mark;
    }
    for(int i=0;i<size-1;i++){
        for(int j=0; j<size-i-1; j++){
            if(s[i].mark<s[i+1].mark)
                temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
    }
    }
                cout<<"Top 2 students are "<<endl;
     for(int i=0; i<2;i++){
        cout<<s[i].name<<endl;
        cout<<s[i].mark<<endl;
     }
    cout << "ahh my ass is big!" << endl;
    return 0;
}

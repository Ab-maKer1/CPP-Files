#include <iostream>
#include <fstream>
using namespace std;
struct student{
int id;
char name[20];
};

int main() {
student s1[2];
ofstream of;
of.open("binary.dat", ios::binary);
for(int i=0;i<2; i++){
cout<<"ENTER STUDENT name ";
cin>>s1[i].name;
cout<<"ENTER STUDENT id ";
cin>>s1[i].id;

of.write((char*)&s1[i],sizeof(s1[i]));
}
of.close();

ifstream iff;
student s2[2];
iff.open("binary.dat", ios::binary);
for(int i=0;i<2; i++){
    iff.read((char*)&s2[i],sizeof(s2[i]));
cout<<"STUDENT name "<<s2[i].name;
cout<<"STUDENT id "<<s2[i].id;
}
iff.close();
return 0;
}

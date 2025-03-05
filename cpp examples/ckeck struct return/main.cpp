#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

// Function that returns a Person structure
Person createPerson(string name, int age) {
    Person p;
    p.name = name;
    p.age = age;
    return p;
}
Person dis(Person p){

 cout << "Enter name: ";
    cin >> p.name;
    cout << "Enter age: ";
    cin >> p.age;
    return p;
}
int main() {
    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;

    Person person = createPerson(name, age),x,y;

    cout << "Person's Name: " << person.name << endl;
    cout << "Person's Age: " << person.age << endl;


x=dis(y);
cout << "Person's Name: " << x.name << endl;
    cout << "Person's Age: " << x.age << endl;
    return 0;
}

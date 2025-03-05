#include <iostream>

using namespace std;
class hello{
private:
    string username;
public :
    void setname(string name){
    username = name;
    }
    string getname(){
    return username;
    }
    void display(){
    cout<<"welcome mr "<<getname()<<" this is rama"<<endl;
    }
};
int main()
{
    hello h;
    h.setname("Abdi");
    h.display();
    cout << "Hello world!" << endl;
    return 0;
}

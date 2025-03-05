#include <iostream>
using namespace std;

int main()
{int z,y;
    int *p1=&z ,*p2=&y;
    cout<<p1<<"\t"<<p2<<endl;
    cout<<p1-p2<<endl;
    int x[]={10,20,30,40,50};
    int*p;
    p=x;
    cout<<*(p)<<endl;
    cout<<*(p+1)<<endl;  // *(p+1) is not the same as *(p++) does not has impact on the next p
    cout<<*p++<<endl;
    cout<<*++p<<endl;   // same as *(++p): increment pointer, and dereference incremented address
    cout<<++*p<<endl;   // same as ++(*p): dereference pointer, and increment the value it points to
    cout<<(*p)++<<endl;   // dereference pointer, and post-increment the value it points to
    cout<<*p<<endl; // 32
    cout<<++(*(p+1))<<endl; //41
    cout<<*(p)++<<endl; // this will change the address for the next operation  // and will print 32
    // *++(p) we are adding one to the address
    cout<<*p;
    return 0;
}

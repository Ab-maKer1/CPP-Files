#include <iostream>

using namespace std;
void x(int y[], int z){
cout<<"Enter a Elements of arrat "<<endl;
for(int i=0;i<z; i++){
    cin>>y[i];
}
}
void g(int c[], int z){
cout<<"Elements of array"<<endl;
for(int i=0; i<z; i++){
    cout<<c[i]<<endl;
}
}
int main(){
int k;
cout<<"Emter size of array"<<endl;
cin>>k;
 int h[k];
x(h,k);
g(h,k);
    cout << "Hello world!" << endl;
    return 0;
}

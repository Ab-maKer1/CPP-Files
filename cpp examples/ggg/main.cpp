#include <iostream>

using namespace std;
int fx(int n){
if(n<=1)
    return n;
else
    return fx(n-1)+fx(n-2);
}
int dx(int n){
if(n<=1)
    return 1;
    else
    return n+dx(n-1);
}
int main()
{
    int y=1,n,x;
    cout << "Hello world!" << endl;
    cin>>n;
 for(int x=0; x<=n; ++x){
    cout<<fx(x)<<endl;
 }
cout<<"the sum of the numbers "<<dx(n);

    return 0;
}

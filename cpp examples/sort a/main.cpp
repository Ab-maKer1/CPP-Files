#include <iostream>

using namespace std;
void sort(int x[] ,int n){
    int temp;
    for(int j=0;j<n-1;j++){
for(int i=0; i<n-j-1;i++){
        if(x[i]>x[i+1]){
            int temp;
            temp=x[i];
            x[i]=x[i+1];
            x[i+1]=temp;

    }}}}
int main()
{
int n;
cout<<"Enter the size of arrya"<<endl;
cin>>n;
    int x[n];
    cout<<"Enter the number of arry"<<endl;
    for(int i=0;i<n; i++){
       cin>>x[i];
    }
        for(int i=0;i<n; i++){
                cout<<x[i]<<endl;
        }
    sort(x,n);
    for(int i=0; i<n;i++){
     cout<<x[i]<<" ";
    }
    return 0;
}

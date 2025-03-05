#include <iostream>
#include<fstream>
using namespace std;
int main()
{
  string x,z;
  ifstream xfile;
  xfile.open("file.txt");
  xfile.close();
  getline(xfile,z);
  cout<<z<<endl;
return 0;
}

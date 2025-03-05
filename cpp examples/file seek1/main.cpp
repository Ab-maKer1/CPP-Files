#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string u, h;
    int z;

    // Write initial content to the file
    fstream ne;
    ne.open("texe.txt", ios::out | ios::trunc); // Open with truncation to start fresh
    ne << "my name AAAAAAAAA";
    ne.close();

    // Open the file for both reading and writing
    fstream nv;
    nv.open("texe.txt", ios::in | ios::out);
    if (!nv) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // Tellg() gives the current position of the get pointer (initially 0)
    z = nv.tellg();
    cout << z << endl;

    // Move the get pointer to position 3
    nv.seekg(3);
    char c;
    nv.get(c);
    cout << c << endl;

    // Move the get pointer to position 3 again and read the line
    nv.seekg(3, ios::beg);
    getline(nv, h);
    cout << h << endl;

    // Move the put pointer to the start and write 'M'
    nv.seekp(0, ios::beg);
    nv.put('M');

    // Move the put pointer to position 3 and write 'N'
    nv.seekp(3, ios::beg);
    nv.put('N');

    // Reset get pointer to the beginning and read the updated line
    nv.seekg(0, ios::beg);
    getline(nv, u);
    cout << u << endl;

    nv.close();
    return 0;
}

 /*
 #include <iostream>
#include <fstream>
using namespace std;

int main() {
    string u,h;
    int z;

  //  << "my name AAAAAAAAA";    //

fstream nv;
    nv.open("texe.txt", ios::in|ios::out); // Fixed filename
    z = nv.tellg(); // Use tellp() for output streams
    cout << z<< endl;
    nv.seekg(3); // 0 1 2 3 4 5 6 7 8 9------
    char c;
    nv.get(c);
    cout<<c<<endl;
    nv.seekg(3,ios::beg);
    cin.ignore();
    getline(nv,h);
    cout<<h<<endl;
    nv.close();
    nv.seekp(0,ios::beg);
    nv.put('M');
    nv.seekp(3,ios::beg);
    nv.put('M');
    nv.seekp(0,ios::beg);
    cin.ignore();
    getline(nv,u);
    cout<<u<<endl;
    nv.close();
    return 0;
}
*/

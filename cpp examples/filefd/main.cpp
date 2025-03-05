#include <iostream>
#include<fstream>
using namespace std;

int main() {
    // Write to the file
    fstream file("example.txt", ios::out | ios::binary);
    file << "Hello, world!";
    file.close();

    // Move the get pointer using seekg with ios::end and tellg
    fstream inputFile("example.txt", ios::in | ios::binary);
    inputFile.seekg(-6, ios::end); // Move get pointer 6 characters before the end
    cout << "Current get pointer position: " << inputFile.tellg() << endl;
    char ch;
    inputFile.get(ch);
    cout << "Character 6 positions before the end: " << ch << endl; // Outputs 'w'
    inputFile.close();

    // Modify a specific position using seekp with ios::end and tellp
    fstream outputFile("example.txt", ios::in | ios::out | ios::binary);
    outputFile.seekp(-6, ios::end); // Move put pointer 6 characters before the end
    cout << "Current put pointer position: " << outputFile.tellp() << endl;
    outputFile.put('W');
    outputFile.seekg(0, ios::beg); // Move get pointer to the beginning of the file to read the modified content

    string modifiedContent;
    getline(outputFile, modifiedContent);
    cout << "Modified content: " << modifiedContent << endl; // Outputs "Hello, WoWld!"
    outputFile.close();

    return 0;
}

    /*
    // Write to the file
    fstream file("example.txt", ios::out | ios::binary);
    file << "Hello, world!";
    file.close();

    // Read specific position using seekg and tellg
    fstream inputFile("example.txt", ios::in | ios::binary);
    inputFile.seekg(-6, ios::end); // Move get pointer to the 8th character from the beginning
    cout << "Current get pointer position: " << inputFile.tellg() << endl;
    char ch;
    inputFile.get(ch);
    cout << "Character at position 7: " << ch << endl; // Outputs 'w'
    inputFile.close();

    // Modify specific position using seekp and tellp
    fstream outputFile("example.txt", ios::in | ios::out | ios::binary);
    outputFile.seekp(7, ios::beg); // Move put pointer to the 8th character from the beginning
    cout << "Current put pointer position: " << outputFile.tellp() << endl;
    outputFile.put('W');
    outputFile.seekg(0, ios::beg); // Move get pointer to the beginning of the file to read the modified content

    string modifiedContent;
    getline(outputFile, modifiedContent);
    cout << "Modified content: " << modifiedContent << endl; // Outputs "Hello, World!"
    outputFile.close();

    return 0;
}


   /* fstream ifile;
    cout<<"hi"<<endl;
    ifile.open("file.txt", ios::out);
    ifile<<"hijkkjl ghjk"<<endl;
    ifile<<"abdisdgxvg"<<endl;

    ifile.close();
    char x[20];
    ifile.open("file.txt", ios::in);
    while(ifile>>x)
        cout<<x<<endl;
        ifile.close();
  long begin,end;
  ifstream myfile ("example.txt");
  begin = myfile.tellg();
  myfile.seekg (0, ios::end);
  end = myfile.tellp();
  myfile.close();
  cout << "size is: " << (end-begin) << " bytes.\n";
*/

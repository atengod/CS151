#include<iostream>
#include<fstream>
using namespace std;
#ifndef Copy.h
#define Copy.h

void copy(string filename);
int main()
{
string filename;
cout << "Enter filename : ";
cin >> filename;
copy(filename);
return 0;
}

void copy(string filename)
{
    string str;
    ifstream in(filename.c_str());
    ofstream out("Copy.h");
    while(getline(in, str))
    {
        out << str << "\n";
    }
  out.close();
    in.close();
}

#endif //Copy.h


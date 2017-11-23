/*********************
//Name:Michael Olorode
//Creation: 11/20/17
//Version: Assignment 6
*********************/

/***********************************
//Name: copy()
//Parameter(s): string filename;
//Return: nothing
//Description: Opens a file and copies its content to a new file.
// Label             Task                                            Goto
// 01                /print(Enter filename)/                          02
// 02                /cin = filename/                                03
// 03                [copy(filename)]                                04
// 04                (exit)
***************************************/
///////////////////////////////////////////////////////
/****************************************
// Label             Task                                            Goto
// 01                [in = filename]                                 02
// 02                [out = stuff.txt]                               03
// 03                <getline(in,str) != eof()>                      04,06 
// 04                [out.print(str + "\n")]                          03
// 05                [out.close()]                                   06
// 06                [in.close()]                                    07
// 08                (exit)
***************************************/

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


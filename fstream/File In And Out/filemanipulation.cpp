#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main()
{
    ifstream modify;

    string file, filename;

    cout << "Enter Filename: ";
    cin >> file;

    filename = "datastorage/" + file + ".txt";


    modify.open(filename);

    int size;

    cout << "How Many Data?";
    cin >> size;

    int array[size], sum = 0;

    for( int i = 0; i < size; i++ )
    {
        modify >> array[i];
        sum += array[i];
    }

    modify.close();

    cout << "Total: " << sum << endl;

    cout << "Job Finished!" << endl;

    cout << "Do You Want To Remove This File?" << endl;
    cout << "For Yes Type : y\nFor No Type : n" << endl;

    const char* dlt = filename.c_str();
    char c;

    cin >> c;

    if( c == 'y' )
    {
        if( remove(dlt) == 0 )
            cout << "File Deleted!" << endl;
        else
            cout << "File Not Deleted!" << endl;
    }
    else if( c == 'n' )
        return 0;


    return 0;
}

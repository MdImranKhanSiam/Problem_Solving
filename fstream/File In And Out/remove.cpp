#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main()
{
    if(remove("datastorage/Imran.txt") == 0 )
        cout << "File Removed";
    else
        cout << "Not Removed";
}

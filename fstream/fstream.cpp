#include <fstream>
#include <string>
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    ofstream newfile;

    string filename, input;

    cout << "Enter File Name: ";
    cin >> filename;
    cin.ignore(INT_MAX, '\n');

    newfile.open(filename);

    cout << "Write To File: ";

    getline( cin , input );

    newfile << input << endl;



    newfile.close();

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string database, filename;

    ofstream input;

    cout << "Create New Database: ";
    cin >> database;

    filename = "datastorage/" + database + ".txt";

    input.open(filename);

    cout << "Number Of Data: ";

    int limit, data;

    cin >> limit;

    for( int i = 1; i <= limit; i++ )
    {
        cout << "Enter Data: ";
        cin >> data;

        input << data << " ";
    }

    input.close();



    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string code, decoded;

    cin >> code;

    decoded += code.at(n-1);

    int decode_size = decoded.size(), index;

    for( int i = n-2; i >= 0; i-- )
    {
        string temp;

        temp += code.at(i);

        index = decode_size/2;

        decoded.insert(index, temp);

        decode_size++;
    }

    cout << decoded << endl;
}


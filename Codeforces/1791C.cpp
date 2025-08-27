#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        string s;

        cin >> s;

        int start = 0, finish = n-1;

        while( true )
        {
            if( (s.at(start) == '0' && s.at(finish) == '1') || (s.at(start) == '1' && s.at(finish) == '0') )
            {
                s.erase(finish,1);
                s.erase(start,1);

                if( s.size() == 0 || s.size() ==  1 )
                    break;

                finish = s.size()-1;
            }
            else
                break;
        }

        cout << s.size() << endl;
    }
}


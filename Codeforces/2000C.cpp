#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, m;

        cin >> n;

        vector<int>Array;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            Array.push_back(value);
        }

        cin >> m;

        for( int i = 0; i < m; i++ )
        {
            string s;

            cin >> s;

            unordered_map<string,string>Hash_A, Hash_S;

            bool result = true;

            if( s.size() != Array.size() )
            {
                result = false;
            }
            else
            {
                for( int j = 0; j < s.size(); j++ )
                {
//                    int num = Array[j];
//
//                    char ch = s.at(j);

                    string num, ch;

                    num = to_string(Array[j]);

                    ch = s.at(j);

                    cout << Hash_A[num] << "...." << Hash_S[ch] << endl;

                    if( (Hash_A[num] == NULL) && (Hash_S[ch] == NULL) )
                    {
                        cout << j << " : " << 1 << endl;

                        Hash_A[num] = ch;

                        Hash_S[ch] = num;
                    }
                    else if( Hash_A[num] == NULL && Hash_S[ch] != NULL )
                    {
                        cout << j << " : " << 2 << endl;
                        result = false;
                    }
                    else if( Hash_A[num] != NULL && Hash_S[ch] == NULL )
                    {
                        cout << j << " : " << 3 << endl;
                        result = false;
                    }

                    if( Hash_A[num] != ch || Hash_S[ch] != num )
                    {
                        cout << j << " : " << 4 << endl;
                        result = false;
                    }

                    if( result == false )
                    {
                        break;
                    }
                }
            }

            cout << ( (result==true) ? "YES" : "NO" ) << "\n";
        }
    }
}


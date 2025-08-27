#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int,unordered_map<int,int>>directed_graph;

    int n, capital, shift;

    cin >> n >> capital >> shift;

    for( int i = 1; i <= n-1 ; i++ )
    {
        int value;

        cin >> value;

        if( i != capital )
        {
            directed_graph[value][i] = 1;
        }
    }


}

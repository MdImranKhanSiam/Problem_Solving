//Difference Array

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define printDA for( auto point : DA ){cout << point << " " << endl;}

void Difference_Array( vector<int>&DA, vector<int>arr )
{
    int length = arr.size();

    DA.push_back(arr[0]);

    for( int i = 1; i < length; i++ )
    {
        DA.push_back(arr[i]-arr[i-1]);
    }
}

void Update_DA( vector<int>&DA, int l, int r, int value )
{
    DA[l] += value;

    if( r < DA.size()-1 )
    {
        DA[r+1] -= value;
    }
}

void Print_DA( vector<int>&DA, vector<int>&A )
{


    int length = DA.size();

    cout << "Print " << length << endl;

    for( int i = 0; i < length; i++ )
    {
        if( i == 0 )
        {
            A.push_back(DA[i]);
        }
        else
        {
            A.push_back(DA[i]+A[i-1]);
        }

        cout << A[i] << " ";
    }
}

int main()
{
    int length;

    cin >> length;

    vector<int>store;

    for( int i = 0; i < length; i++ )
    {
        int value;

        cin >> value;

        store.push_back(value);
    }

    vector<int>DA;

    Difference_Array(DA,store);

    printDA;

    Update_DA(DA,2,4,10);

    vector<int>Array;

    Print_DA(DA,Array);
}

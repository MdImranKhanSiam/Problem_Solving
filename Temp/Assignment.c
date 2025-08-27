//Merge Sort

#include <bits/stdc++.h>

using namespace std;

void merrge(int arr[], int p, int q, int r);
void mergesort(int arr[], int l, int r);
void print(int arr[], int limit);

int main()
{
    int s;

    cout << "Array Size: ";
    cin >> s;

    int a[s];

    for( int i = 0; i < s; i++ )
    {
        cout << "Enter Value: ";
        cin >> a[i];
    }

    cout << "Before Sorting" << endl;

    print(a, s);

    cout << endl;

    mergesort(a, 0, s-1);


    cout << "After Sorting" << endl;

    print(a, s);

    cout << endl;


}

void merrge(int arr[], int p, int q, int r)
{

    int s1 = q - p + 1;
    int s2 = r - q;

    int L[s1];
    int M[s2];

    for( int i = 0; i < s1; i++ )
    {
        L[i] = arr[ p + i ];
    }

    for( int j = 0; j < s2; j++ )
    {
        M[j] = arr[ q + j + 1 ];
    }

    int i = 0, j = 0, k = p;

    while( i < s1 && j < s2 )
    {
        if( L[i] <= M[j] )
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }

        k++;
    }

    while( i < s1 )
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while( j < s2 )
    {
        arr[k] = M[j];
        j++;
        k++;
    }

}

void mergesort(int arr[], int l, int r)
{
    int m;

    if( l < r )
    {
        m = l + ( r - l ) / 2;

        mergesort(arr, l, m);
        mergesort(arr, m+1, r);
        merrge(arr, l, m, r);
    }
}


void print(int arr[], int limit)
{
    for( int i = 0; i < limit; i++ )
    {
        cout << arr[i] << " ";
    }
}

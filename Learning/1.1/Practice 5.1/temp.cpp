#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    deque<ll>q;

    q.push_front(4);

    q.push_front(7);

    q.push_front(2);

    q.pop_front();

    cout << q.front();



}

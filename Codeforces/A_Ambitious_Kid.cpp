#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n; cin >> n;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        mn = min(abs(data), mn);
    }
    cout << mn << nl;

    return 0;
}
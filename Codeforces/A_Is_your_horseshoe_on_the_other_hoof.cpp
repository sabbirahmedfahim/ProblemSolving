#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ll a, b, c, d;
    vector<ll> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        if (v[i] == v[i + 1])
            cnt++;
    }
    cout << cnt;

    return 0;
}
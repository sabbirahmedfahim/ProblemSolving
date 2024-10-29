#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll n; cin >> n;
    vector<ll> v(n-2);
    ll sum = 0;
    for (int i = 0; i < n-2; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    ll givenSum; cin >> givenSum;
    cout << (givenSum - sum) + 1 << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();
    

    return 0;
}
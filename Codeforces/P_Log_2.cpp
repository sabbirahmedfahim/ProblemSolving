#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int func(ll n)
{
    if(n == 1) return 0;
    return 1 + func(n/2);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n; cin >> n;

    cout << func(n) << nl;

    return 0;
}
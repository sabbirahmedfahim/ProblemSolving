// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<int> v(n); for(auto &c : v) cin >> c;

    sort(v.rbegin(), v.rend());

    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        s += (v[0] - v[i]);
    }

    int GCD = 0;
    for (int i = 1; i < n; i++)
    {
        GCD = __gcd(GCD, (v[0]-v[i]));
    }

    // TLE
    // vector<int> tmp;
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         GCD = __gcd(GCD, abs(v[i]-v[j]));
    //     }
    // }

    cout << s/GCD << " " << GCD << nl;

    return 0;
}
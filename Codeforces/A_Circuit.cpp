#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    n *= 2;
    vector<int> v(n);
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        (v[i] == 0)? zero++ : one++;
    }
    if(zero == 0 || one == 0) cout << 0 << " " << 0 << nl;
    else 
    {
        if(zero%2 == 0 && one%2 == 0) cout << 0 << " ";
        else if(zero%2 && one%2) cout << 1 << " ";
        cout << min(zero, one) << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
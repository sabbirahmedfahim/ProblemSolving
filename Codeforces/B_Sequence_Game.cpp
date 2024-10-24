// Up-solved after reviewing others' approaches (YouTube)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    input(v);
    vector<ll> v2;
    v2.push_back(v[0]); // first index same
    for (int i = 1; i < n; i++)
    {
        if(v[i-1] > v[i]) 
        {
            v2.push_back(v[i]); v2.push_back(v[i]);
        }
        else v2.push_back(v[i]);
    }
    cout << v2.size() << nl;
    print(v2);
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
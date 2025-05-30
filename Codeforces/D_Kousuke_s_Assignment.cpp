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
    vector <ll> v(n); input(v);
    set <ll> s; 
    s.insert(0);
    /*
    Adding 0 helps us find zero-sum segments from the start. Edge case.
    */ 
    ll sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if(s.count(sum)) // Checks if sum already exists in set s
        {
            ans++; sum = 0; s.clear(); s.insert(0);
        }
        s.insert(sum);
    }
    cout << ans << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<ll> a(n), b(n); 
    for(auto &data : a) cin >> data; 
    for(auto &data : b) cin >> data;

    vector<ll> rev_b = b; reverse(all(rev_b));

    if(a == b && a == rev_b) cout << "both" << nl;
    else if(a == b) cout << "queue" << nl;
    else if(a == rev_b) cout << "stack" << nl;
    else cout << "neither" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
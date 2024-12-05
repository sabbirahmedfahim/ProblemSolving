#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    sort(all(s));
    for (int i = 0, j = n-1; i < n/2; i++, j--)
    {
        cout << s[i] << s[j];
    }
    if(n%2) cout << s[n/2];
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
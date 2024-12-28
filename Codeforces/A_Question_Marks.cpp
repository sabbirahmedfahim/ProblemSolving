#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s; 
    int a = 0, b = 0, c = 0, d = 0;
    for(auto data : s)
    {
        if(data == 'A') a++;
        if(data == 'B') b++;
        if(data == 'C') c++;
        if(data == 'D') d++;
    }
    cout << min(n, a) + min(n, b) + min(n, c) + min(n, d) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
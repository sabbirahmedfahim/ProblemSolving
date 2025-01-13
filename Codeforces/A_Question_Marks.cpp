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
        else if(data == 'B') b++;
        else if(data == 'C') c++;
        else if(data == 'D') d++;
    }
    cout << min(a, n) + min(b, n) + min(c, n) + min(d, n) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int i = 1; i <= t; i++)
    {
        // cout << "tc:" << i << nl;
        solve();
    }
    

    return 0;
}
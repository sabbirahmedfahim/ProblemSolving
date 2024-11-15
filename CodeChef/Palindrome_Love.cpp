// wrong approach
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    int op = 0;
    for (int i = 0, j = s.size()-1; i <= j; i++, j--)
    {
        if(s[i] != s[j]) op++;
    }
    
    if(s.size()%2 == 1)
    {
        if(op*2 + 1 == s.size()) cout << -1 << nl;
        else cout << op << nl;
    }
    else cout << ((op*2 == s.size())? -1 : op) << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
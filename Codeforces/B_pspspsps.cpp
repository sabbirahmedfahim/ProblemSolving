// resolved [TLE***]
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    int cntS = 0, cntP = 0, idxS = -1, idxP = -1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 's') cntS++;
        if(s[i] == 'p') cntP++;
        // if(idxS == -1 && s[i] == 's') idxS = i;
        if(s[i] == 's') idxS = i; // s er index last porjonto jabe so that p er shate contradiction na hoy
        if(idxP == -1 && s[i] == 'p') idxP = i;
    }

    if(cntS == 0 || cntP == 0) cout << "YES" << nl;
    else if(idxS == 0 || idxP == n-1) cout << "YES" << nl; // s ekta or p ektai highest and onnota any number of times + no contradiction
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
// upsolve
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
If the substring contains an ODD number of ones, delete every 0 in it.
If it instead contains an EVEN number of ones, delete every 1 in it.
*/
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int cntZero = 0, cntOne = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1') cntOne++;
        else cntZero++;
    }
    if(cntOne == 0) cout << cntZero << nl;
    else if(cntOne%2) cout << 1 << nl;
    else cout << 0 << nl; 
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
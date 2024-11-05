#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; string s1, s2; cin >> n >> s1 >> s2;
    bool isPossible = false;
    for (int i = 0; i < n; i++)
    {
        if(s1[i] == 'R' && s2[i] == 'B' || s1[i] == 'R' && s2[i] == 'G'
        || s2[i] == 'R' && s1[i] == 'B' || s2[i] == 'R' && s1[i] == 'G')
        {
            isPossible = true; break;
        }
    }
    cout << ((!isPossible)? "YES" : "NO") << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
// resolved from the Editorials (prefix/suffix observation, greedy, easy)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;

    // combinations
    /*
    12 % 4 == 0
    32 % 4 == 0
    13 % 4 != 0
    23 % 4 != 0
    31 % 4 != 0
    21 % 4 != 0
    */

    int oneOrThree = 0, two = 0;
    for(auto e : s) if(e == '1' || e == '3') oneOrThree++;

    int rakhteParbo = oneOrThree;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1' || s[i] == '3') oneOrThree--;
        if(s[i] == '2') two++;

        rakhteParbo = max(rakhteParbo, oneOrThree + two);
        // cerr << oneOrThree << " -- " << two << nl;
    }
    
    cout << s.size() - rakhteParbo << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}
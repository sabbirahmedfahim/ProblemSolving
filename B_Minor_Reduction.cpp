// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;

    if(s.size() == 2) // edge case
    {
        int x = (s[0] - '0') + (s[1] - '0');
        cout << x << nl; return;
    }

    // checking two non-zero consecutive values and there sum is more than 9
    bool willNotReduce = false;
    bool consecutive_non_zero = false;
    int last_good_idx = -1;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i] != '0' && s[i + 1] != '0') consecutive_non_zero = true;

        int x = (s[i] - '0') + (s[i + 1] - '0');
        if(x >= 10) willNotReduce = true;
    }
    
    // if we get the target that's sum is two digit, i.e "doesn't change the length"
    string res;
    if(willNotReduce) // doesn't change the length
    {
        bool on = true;
        int idx = -1;

        for (int i = s.size()-1; i >= 1; i--)
        {
            int x = (s[i] - '0') + (s[i - 1] - '0');
            if(on && x >= 10)
            {
                string arektaStr = to_string(x); reverse(all(arektaStr));
                res += arektaStr;
                on = false;
                idx = i - 1;
                i--;
            }
            else res += s[i];
        }
        if(idx != 0) res += s[0];
        reverse(all(res));
        cout << res << nl;
        return;
    }

    // length will be reduce by 1
    for (int i = s.size()-1; i >= 2; i--)
    {
        res += s[i];
    }
    int x = (s[1] - '0') + (s[0] - '0');
    string arektaStr = to_string(x);
    reverse(all(arektaStr));
    res += arektaStr;
    reverse(all(res));
    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
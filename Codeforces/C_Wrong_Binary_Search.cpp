#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    if(n >= 2 && ((s[0] == '0' && s[1] == '1') || (s[n - 2] == '1' && s[n - 1] == '0')))
    {
        cout << "NO" << nl; return;
    }

    for (int l = 0, r = 0; r < n; r++)
    {
        if(r - l + 1 == 3)
        {
            if(s[l] == '1' && s[l + 1] == '0' && s[r] == '1')
            {
                cout << "NO" << nl; return;
            }
            l++;
        }
    }
    
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1') res.push_back(i + 1);
        else 
        {
            int big_brother = i + 1;
            for (int j = i + 1; j < n; j++)
            {
                if(s[j] == '0') big_brother = j + 1;
                else break;
            }
            if(big_brother == i + 1)
            {
                cout << "NO" << nl; return;
            }

            for (i; i < n; i++)
            {
                if(s[i] == '0') res.push_back(big_brother--);
                else break;
            }
            i--;
        }
    }
    
    // cout << "have answer" << nl;
    cout << "YES" << nl;
    print(res);
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
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const ll N = 2E5, MOD = 998244353;
void solve()
{
    string s; cin >> s;
    int n = s.size();

    vector<int> diff;
    int curr = 1;
    for (int i = 1; i < n; i++)
    {
        if(s[i] != s[i - 1])
        {
            if(curr > 1) diff.push_back(curr);
            curr = 1;
        }
        else 
        {
            curr++;
        }
    }
    if(curr > 1) diff.push_back(curr);

    int tot_op = 0;
    for (int i = 0; i < diff.size(); i++)
    {
        tot_op += diff[i] - 1;
    }
    

    cout << tot_op << " ";
    int tot_sequence_of_op = 1;
    for (int i = 0; i < diff.size(); i++)
    {
        tot_sequence_of_op = (tot_sequence_of_op * )
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    build_fact();

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
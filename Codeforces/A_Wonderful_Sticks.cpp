#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    for(auto &e : s)
    {
        if(e == '>') e = '<';
        else e = '>';
    }
    // cout << s << " --> ";

    int boro = n, choto = 1;

    deque<int> res;
    for (int i = n-2; i >= 0; i--)
    {
        if(s[i] == '<')
        {
            res.push_front(boro--);
        }
        else 
        {
            res.push_front(choto++);
        }
    }

    res.push_front((n*(n+1)/2) - accumulate(all(res), 0));
    
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
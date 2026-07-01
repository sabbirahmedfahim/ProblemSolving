#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;

    int zeros = (3 * n) - x;

    string s; 
    for (int i = 0; i < 3 * n; i++)
    {
        s.push_back('1');
    }
    
    int curr = 0;
    while (zeros && curr < n)
    {
        if(s[curr] == '0') // this does not happen if logic is right
        {
            continue;
        }

        s[curr] = '0';
        zeros--;
        if(zeros && curr + n < s.size() && s[curr + n] == '1') 
        {
            s[curr + n] = '0';
            zeros--;
        }

        curr ++;
    }

    
    for (int i = 0; i < s.size(); i++)
    {
        if(zeros > 0 && s[i] == '1')
        {
            s[i] = '0'; zeros--;
        }
    }

    if(count(all(s), '1') != x)
    {
        while (1)
        {
            ;
        }
        
    }
    
    cout << s << nl;
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
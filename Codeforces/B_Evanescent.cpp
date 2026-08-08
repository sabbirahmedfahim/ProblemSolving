#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    map<char, int> mp;


    int ans = 0; 
    for (int i = 0; i < n - 2; i++)
    {
        if(s[i] != s[i + 1] && s[i + 1] != s[i + 2])
        {
            s[i + 1] = '0'; 

            break;
        }
    }

    int cnt = 0;
    // cnt += ans;

    for (int i = 0; i < n - 1; i++)
    {
        if(s[i + 1] == '0')
        {
            if(s[i] != s[i + 2]) cnt++;
        }
        else if(s[i] == '0');
        else if(s[i] != s[i + 1]) cnt++;
    }

    cnt++;
    
    cout << cnt << nl;
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
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    int totGivenONe = 0;
    for(auto e : s) 
    {
        if(e == '1') totGivenONe++;
    }

    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            if(l == -1) l = i, r = i;
            else r = i;
        }
    }
    
    int res = 0;
    if(l != -1)
    {
        for (int i = l; i <= r; i++)
        {
            int cnt = 0;
            while(i <= r && s[i] == '0')
            {
                cnt++;
                i++;
            }

            if(cnt >= 1)
            {
                res += cnt / 3;
            }
        }

        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            while(i < n && s[i] == '0')
            {
                cnt++; i++;
            }
            
            if(cnt == 0) break;
            else if(cnt == 1) break;
            else if(cnt <= 3)
            {
                res += 1; break;
            }
            else 
            {
                res++;
                cnt -= 4;
                res += cnt / 3 + (cnt % 3 != 0);
            }

            break;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            int cnt = 0;
            while(i >= 0 && s[i] == '0')
            {
                cnt++; i--;
            }

            if(cnt == 0) break;
            else if(cnt == 1) break;
            else if(cnt <= 3)
            {
                res += 1; break;
            }
            else 
            {
                res++;
                cnt -= 4;
                res += cnt / 3 + (cnt % 3 != 0);
            }

            break;
        }
        
        cout << res + totGivenONe << nl;
        return;
    }
    
    if(l == -1) // that means no zero
    {
        if(n <= 3) res = 1;
        else 
        {
            res = 2;
            int cnt = n - 4;
            res += cnt / 3;
        }
        
        cout << res << nl;
        return;
    }
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
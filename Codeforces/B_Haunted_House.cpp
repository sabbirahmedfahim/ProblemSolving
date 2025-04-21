// resolved from the editorial (i should implement the solution again)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve() 
{
    int n; string s; cin >> n >> s;
    reverse(all(s));

    int zero = 0;
    for(auto e : s) 
    {
        if(e == '0') zero++;
    }

    for (int i = 1; i <= s.size(); i++) // O(n * n) -> TLE for nested
    {
        if(zero >= i) 
        {
            // every queries are independent
            int cnt = 0, sum_one = 0, sum_zero = 0;
            for (int j = 0; j < i; j++)
            {
                if(s[j] == '1') 
                {
                    cnt++;
                    sum_one += j;
                }
            }
            if(cnt == 0)
            {
                cout << 0 << " "; continue;
            }
            for (int j = i; j < s.size() && cnt > 0; j++)
            {
                if(s[j] == '0')
                {
                    cnt--;
                    sum_zero += j;
                }
            }
            cout << sum_zero - sum_one << " ";
        }
        else cout << -1 << " ";   
    }
    cout << nl;
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
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; n++;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<int> dp(n, 1E9);

    dp[0] = 0;
    for (int i = 1; i < n; i++) // skip i == 0 as first element
    {
        for (int j = 1; j * j <= a[i]; j++)
        {
            if(a[i] % j == 0)
            {
                int ekhta = i - j;
                if(ekhta >= 0 && dp[ekhta] != 1E9) dp[ekhta] = min(dp[i], 1 + dp[ekhta]);

                int arekta = i - (a[i] / j);
                if(arekta >= 0 && dp[arekta] != 1E9) dp[arekta] = min(dp[i], 1 + dp[arekta]);
            }
        }
    }

    if(dp[n - 1] == 1E9) cout << -1 << nl;
    else cout << dp[n] << nl;
    

    return 0;
}
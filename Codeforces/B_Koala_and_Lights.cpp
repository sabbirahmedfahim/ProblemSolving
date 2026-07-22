// used test cases
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1e5 + 7;
int dp[105][N] = {0};
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; string s; cin >> n >> s;

    int onChilo = count(all(s), '1');

    for (int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        char c = s[i];

        for (int j = 0; j < b; j++)
        {
            dp[i][j] = c == '1';
        }
        

        for (int j = b; j < N; j++)
        {
            if((j - b + a) % a == 0) // first iteration ei toggle korbe
            {
                if(c == '1') c = '0';
                else c = '1';
            }

            dp[i][j] = c == '1';
        }
    }

    int mx = 0;
    for (int i = 0; i < N; i++)
    {
        int curr = 0;
        for (int j = 0; j < n; j++)
        {
            curr += dp[j][i];
        }
        mx = max(mx, curr);
    }
    
    cout << max(onChilo, mx) << nl;
    

    return 0;
}
// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    string ans;
    if(s[0] != '9')
    {
        for (int i = 0; i < n; i++)
        {
            int y = 9 - (s[i] - '0'); // typecasting
            ans += y + '0'; // typecasting
        }
    }
    else 
    {
        int carry = 0;
        for (int i = n-1; i >= 0; i--)
        {
            int x = s[i] - '0';
            x += carry;
            if(x > 1) 
            {
                carry = 1;
                ans += ((11 - x) + '0');
            }
            else 
            {
                carry = 0;
                ans += ((1-x)+'0');
            }
        }
        reverse(all(ans));
    }

    cout << ans << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
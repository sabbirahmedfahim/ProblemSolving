#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    string s, ans = "ADVITIYA"; cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != ans[i])
        {
            if(s[i] < ans[i]) cnt += ans[i] - s[i];
            else 
            {
                cnt += 'Z' - s[i] + 1;
                cnt += ans[i] - 'A';
            }
        }
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
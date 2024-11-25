#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
observation: use LL, otherwise you might get WA
*/
void solve()
{
    int n; string s; cin >> n >> s;
    ll cnt = 0;
    ll m = n-1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'R') cnt += m-i;
        else cnt += i;
    }
    
    vector<ll> ans;
    for (int i = 0; i < n/2; i++) // will change L to R
    {
        ll will_get = m-i;
        ll cur_score = i;
        if(s[i] == 'L') ans.push_back(will_get - cur_score);
    }

    for (int i = n/2; i < n; i++) // R to L ...
    {
        if(i == n/2 && n%2) continue; // Findings: for even values of n/2, right half
        ll will_get = i;
        ll cur_score = m-i;
        if(s[i] == 'R') ans.push_back(will_get - cur_score);
    }

    sort(ans.rbegin(), ans.rend());

    for (int i = 0; i < n; i++)
    {
        if(i+1 <= ans.size()) 
        {
            cnt += ans[i]; 
        }
        cout << cnt << " ";
    }
    cout << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
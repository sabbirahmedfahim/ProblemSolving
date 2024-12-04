#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<ll> v(n-1);
    for (int i = 0; i < n-1; i++) // n--
    {
        cin >> v[i];
    }
    sort(all(v));

    vector<ll> ans;
    ans.push_back(v[0]/2);
    ans.push_back(v[0]-ans[0]);
    // ll due_val = v[0]/2; 

    for (int i = 2; i < n; i++)
    {
        // ans.push_back(due_val);
        // due_val = v[i] - due_val;
        ans.push_back(v[i-1] - ans[i-1]);
    }
    print(ans);
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
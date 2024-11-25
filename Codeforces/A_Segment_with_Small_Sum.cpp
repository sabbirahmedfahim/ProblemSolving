#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    ll n, s; cin >> n >> s;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;
    
    ll sum = 0; int cnt = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        sum += v[r];
        if(sum <= s) cnt = max(cnt, r-l+1);
        else 
        {
            sum -= v[l];
            l++;
        }
    }
    cout << cnt << nl;
    
    return 0;
}
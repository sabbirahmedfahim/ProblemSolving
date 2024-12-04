#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    ll odd = 0, even = 0;
    ll mxOdd = -1, mxEven = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]%2 ? odd++ : even++;
        if(v[i]%2) mxOdd = max(mxOdd, v[i]);
        if(v[i]%2 == 0) mxEven = max(mxEven, v[i]);
    }
    if(odd == 0 || even == 0)
    {
        cout << 0 << nl; return;
    }

    int cnt = 0;
    sort(all(v));
   
    for (int i = 0; i < n; i++)
    {
        if(v[i]%2 == 0 && v[i] < mxOdd) 
        {
            mxOdd += v[i]; cnt++; even--;
        }
        else if(v[i]%2 == 0 && v[i] > mxOdd) 
        {
            // mxOdd += v[i]; 
            cnt += even; cnt++; break;
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
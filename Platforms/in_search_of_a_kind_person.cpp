#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int cs = 1;
void solve()
{
    cout << "Case " << cs++ << ": ";
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    vector<ll> suffixArr(n), prefixArr(n);
    vector<ll> suffixMx(n);
    ll mx = 0, mn = 10E10;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, v[i]); mn = min(mn, v[i]);
        prefixArr[i] = mx;
    }
    mx = 0, mn = 1E10;
    for (int i = n-1; i >= 0; i--)
    {
        mx = max(mx, v[i]); mn = min(mn, v[i]);
        suffixArr[i] = mn;
        suffixMx[i] = mx;
    }
    // print(prefixArr); print(suffixArr);

    // edge cases
    if(v.size() == 1) 
    {
        cout << 1 << nl; return;
    }
    if(is_sorted(all(v)) && v.front() != v[1])
    {
        cout << 1 << nl; return;
    }
    if(v.front() > suffixMx[n-2])
    {
        cout << "Humanity is doomed!" << nl; return;
    }
    
    // main operations
    int pos = -1;
    for (int i = 1; i < n-1; i++)
    {
        if(v[i] > prefixArr[i-1] && v[i] < prefixArr[i+1] && v[i] < suffixArr[i+1] && v[i] > suffixArr[i-1])
        {
            pos = i+1; break;
        }
    }
    if(pos == -1 && v.back() > prefixArr[n-2])
    {
        cout << n << nl; return;
    }
    if(pos == -1) cout << "Humanity is doomed!" << nl;
    else cout << pos << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
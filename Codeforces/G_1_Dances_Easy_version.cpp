#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    a[0] = 1;
    for (int i = 0; i < n; i++)
    {
        if(i != 0) cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(all(a)); sort(all(b));
    // print(a); print(b);

    int cnt = 0;
    for (int i = 0, j = 0; i < n && j < n; )
    {
        if(a[i] < b[j]) {i++, j++;}
        else 
        {
            while (j < n && a[i] >= b[j])
            {
                cnt++; j++;
            }
        }
    }
    
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}
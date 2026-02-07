// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    
    int A = 1E9, B = 1E9, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(A == 1E9) A = a[i];
        else if(A >= a[i] && B == 1E9) A = a[i];
        else if(B == 1E9) B = a[i];
        else if(A >= a[i] && B >= a[i])
        {
            if(A >= B) B = a[i];
            else A = a[i];
        }
        else if(A >= a[i]) 
        {
            A = a[i];
        }
        else if(B >= a[i]) 
        {
            B = a[i];
        }
        else 
        {
            if(A >= B) B = a[i];
            else A = a[i];

            cnt++;
        }

        // cerr << cnt << nl;
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
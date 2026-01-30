#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    
    int l = -1, r = -1;
    for (int i = 1, j = n; i <= n; i++, j--)
    {
        if(a[i] == j) cout << a[i] << " ";
        else 
        {
            l = i; break;
        }
    }

    if(l == -1)
    {
        cout << nl;
        return;
    }
    
    int currMx = -1;
    for (int i = l; i <= n; i++)
    {
        if(a[i] > currMx)
        {
            r = i; currMx = a[i];
        }
    }
    
    for (int i = r; i >= l; i--)
    {
        cout << a[i] << " ";
    }
    for (int i = r + 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;
    
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
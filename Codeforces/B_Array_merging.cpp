// took hints (eta completely nije kora uchit, even without getting hints from tc >= 2)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    

    map<int, int> aOcc, bOcc;
    for (int i = 1; i <= 2 * n; i++)
    {
        aOcc[i] = 0, bOcc[i] = 0;
    }
    
    for (int i = 1; i <= n;)
    {
        int j = i;
        while (i <= n && a[j] == a[i])
        {
            if(i == n) break;
            i++;
        }

        // if(a[j] == 1) cout << "#Huh#" << aOcc[a[j]] << nl;
        
        if(aOcc[a[j]] < i - j + 1) 
        {
            aOcc[a[j]] = i - j + 1; 
            if(a[i] != a[j]) aOcc[a[j]]--;
        }

        if(i <= n && a[i] != a[j]);
        else i++;
    }

    for (int i = 1; i <= n;)
    {
        int j = i;
        while (i <= n && b[j] == b[i])
        {
            if(i == n) break;
            i++;
        }
        // if(b[j] == 2) cout << "#Huh#" << bOcc[b[j]] << nl;

        if(bOcc[b[j]] < i - j + 1) 
        {
            bOcc[b[j]] = i - j + 1; 
            if(b[i] != b[j]) bOcc[b[j]]--;
        }

        if(i <= n && b[i] != b[j]);
        else i++;

        // if(b[j] == 2) cout << "#Huh#" << bOcc[b[j]] << nl;
    }

    int res = 0;
    for (int i = 1; i <= 2 * n; i++)
    {
        // cout << i << "# " << aOcc[i] << " " << bOcc[i] << nl;
        res = max(res, aOcc[i] + bOcc[i]);
    }
    
    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
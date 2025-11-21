#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    int aji = 0, mai = 0;
    int fixedAji = 0, fixedMai = 0;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            if(a[i] != b[i]) aji++;
        }
        else
        {
            if(a[i] != b[i]) mai++;
        }

        if(a[i] == b[i] && a[i] == 1) fixedAji++, fixedMai++;
    }
    
    int tot_aji = aji + fixedAji;
    int tot_mai = mai + fixedMai;
    
    // cerr << tot_aji << " : " << tot_mai << nl;
    // cerr << aji << " : " << mai << nl;

    if((tot_aji + tot_mai) % 2 == 0) 
    {
        cout << "Tie" << nl;
        return;
    }

    if(aji > mai) cout << "Ajisai" << nl;
    else if(mai > aji) cout << "Mai" << nl;
    else if(fixedAji & 1) cout << "Ajisai" << nl;
    else cout << "Mai" << nl;
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

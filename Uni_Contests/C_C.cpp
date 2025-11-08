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

    int twoOrOne = 0;
    for(auto e : a) 
    {
        if(e <= 2) twoOrOne++;
    }

    int moreThanTwo = n - twoOrOne;

    if(moreThanTwo == 0)
    {
        if(twoOrOne & 1) cout << "Mrinalini" << nl;
        else cout << "Kadambari" << nl;
        return;
    }

    if(moreThanTwo & 1) 
    {
        cout << "Mrinalini" << nl;
    }
    else //if(moreThanTwo % 2 == 0)
    {
        if(twoOrOne % 2 == 0) cout << "Mrinalini" << nl;
        else cout << "Kadambari" << nl;
    }
    // else cout << "work" << nl;
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
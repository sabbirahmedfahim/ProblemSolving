// used test case as a hints
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
    sort(all(a));
    // print(a);

    int neg = 0, zero = 0, posAche = 0, mnPos = 1E9, mnAbsNeg = 1E9, negDiff = 1E9;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < 0) 
        {
            neg++; 
            mnAbsNeg = min(mnAbsNeg, abs(a[i]));
        }
        else if(a[i] == 0) zero++;
        else 
        {
            posAche = 1;
            mnPos = min(mnPos, a[i]);
        }

        if(i + 1 < n && a[i + 1] < 0) negDiff = min(negDiff, abs(a[i] - a[i + 1]));
    }

    vector<int> res;
    if(posAche) res.push_back(posAche + (zero > 0));
    if(posAche && zero && mnAbsNeg >= mnPos && neg && abs(a.front() - mnPos) >= mnPos && negDiff >= mnPos) res.push_back(neg + 1 + posAche);
    if(posAche && neg && abs(a.front() - mnPos) >= mnPos && negDiff >= mnPos) res.push_back(neg + posAche);

    res.push_back(neg + zero);

    sort(all(res));
    // print(res);

    cout << res.back() << nl;
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
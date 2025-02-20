#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, mnOrGreater, mxOrLess; cin >> n >> mnOrGreater >> mxOrLess;
    vector<int> x, y, commonXY;
    for (int i = 1; i <= n; i++)
    {
        if(i == mnOrGreater || i == mxOrLess) continue; // hmm...
        if(i >= mnOrGreater && i <= mxOrLess) commonXY.push_back(i);
        else if(i >= mnOrGreater) x.push_back(i);
        else if(i <= mxOrLess) y.push_back(i);
    }

    x.push_back(mnOrGreater), y.push_back(mxOrLess);

    sort(all(commonXY)); reverse(all(commonXY));

    int halfOnN = n/2; // n is even

    if(x.size() < halfOnN)
    {
        while (!commonXY.empty() && x.size() < halfOnN)
        {
            x.push_back(commonXY.back());
            commonXY.pop_back();
        }
    }
    if(y.size() < halfOnN)
    {
        while (!commonXY.empty() && y.size() < halfOnN)
        {
            y.push_back(commonXY.back());
            commonXY.pop_back();
        }
    }

    if(x.size() == halfOnN && y.size() == halfOnN)
    {
        for (int i = 0; i < x.size(); i++) cout << x[i] << " ";
        for (int i = 0; i < y.size(); i++) cout << y[i] << " ";
        cout << nl;
    }
    else cout << -1 << nl;
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
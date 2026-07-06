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

    int one, two, three, sum;
    int currIdx = 0;

    // for part 1
    one = 0, two = 0, three = 0, sum = 0;
    while (((two + three) > sum / 2 || one == 0) && currIdx < n)
    {
        if(a[currIdx] == 1) one++;
        else if(a[currIdx] == 2) two++;
        else if(a[currIdx] == 3) three++;

        sum++;
        currIdx++;
    }
    while ((two + three) < one && currIdx < n && a[currIdx] == 3)
    {
        three++; 
        sum++;
        currIdx++;
    }
    
    if(one == 0 || (two + three) > one)
    {
        cout << "NO" << nl; return;
    }
    // cerr << currIdx << nl;

    // for part 2
    one = 0, two = 0, three = 0, sum = 0;
    while ((three > one + two || (one + two) == 0) && currIdx < n)
    {
        if(a[currIdx] == 1) one++;
        else if(a[currIdx] == 2) two++;
        else if(a[currIdx] == 3) three++;

        sum++;
        currIdx++;
    }
    if((one + two) == 0 || three > one + two)
    {
        cout << "NO" << nl; return;
    }
    // cerr << currIdx << nl;

    // for part 3
    if(currIdx == n) cout << "NO" << nl;
    else cout << "YES" << nl;
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
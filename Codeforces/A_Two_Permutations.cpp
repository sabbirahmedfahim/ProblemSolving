// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, a, b; cin >> n >> a >> b;

    // can i manually check??
    vector<int> vec(n + 1);

    for (int i = 1; i <= n; i++)
    {
        vec[i] = i;
    }

    int from = -1;
    int tmp = b;
    for (int i = n; (tmp != 0); i--)
    {
        vec[i] = i;
        tmp--;
        from = i-1;
    }
    // cout << from << nl;
    tmp = from;
    for (int i = a+1; i <= from; i++)
    {
        vec[i] = tmp--;
    }

    int fromLeft = 0, fromRight = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << vec[i] << ' ';
    // }
    // cout << nl;

    for (int i = 1; i <= n; i++) 
    {
        if(vec[i] == i) fromLeft++;
        else break;
    }
    for (int i = n; i >= 1; i--) 
    {
        if(vec[i] == i) fromRight++;
        else break;
    }

    // cout << a << " " << b << nl;
    if(fromLeft == a && fromRight == b) cout << "Yes" << nl;
    else cout << "No" << nl;
    // cout << fromLeft << " - " << fromRight << nl << nl;
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
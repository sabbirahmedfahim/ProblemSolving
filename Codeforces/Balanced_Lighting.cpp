#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    int red = 0, blue = 0, others = 0;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        if(data == 1) red++;
        else if(data == 2) blue++;
        else others++;
    }
    
    if(red > blue + others || blue > red + others) 
    {
        cout << "No" << nl; return;
    }
    
    int tot = red + blue + others;
    if(tot & 1) cout << "No" << nl;
    else cout << "Yes" << nl;
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
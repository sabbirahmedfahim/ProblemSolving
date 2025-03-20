// resolved (an easy implementation based, I should try again later)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    int pos = 0, neg = 0, ratingOfA = 0, ratingOfB = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 1 && b[i] == 1) pos++;
        else if(a[i] == -1 && b[i] == -1) neg++;
        else if(a[i] >= b[i]) ratingOfA += a[i];
        else ratingOfB += b[i];
    }
    
    while (pos--)
    {
        if(ratingOfA >= ratingOfB) ratingOfB++;
        else ratingOfA++;
    }
    while (neg--)
    {
        if(ratingOfA <= ratingOfB) ratingOfB--;
        else ratingOfA--;
    }

    cout << min(ratingOfA, ratingOfB) << nl;
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
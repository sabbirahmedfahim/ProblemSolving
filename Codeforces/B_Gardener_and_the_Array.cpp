// resolved (statement is unclear, so watching tutorial is worthy)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    // vector<int> bits(30); // 2E5 so...
    map<int, int> bits;

    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        while (x--)
        {
            int setBit; cin >> setBit;

            if(bits.count(setBit)) bits[setBit] = 2E5 + 5;
            else bits[setBit] = i; // multiple unique bit same array te ashleo set e rakhbo tai 1 tai cnt hobe
        }
    }

    set<int> bad;
    for(auto [x, y] : bits)
    {
        if(y != (2E5 + 5)) bad.insert(y);
    }

    if(bad.size() == n) cout << "No" << nl; // partition korai jacchena ;)
    else cout << "Yes" << nl;
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
/*
https://www.youtube.com/watch?v=2QfiBkE2Bz8
*/
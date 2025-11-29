#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    n += n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int,int> mp;
    for(auto e : a) mp[e]++;

    int peraNaiSeat = 0;
    int cnt = 0;
    for(auto [x, y] : mp) // OK
    {
        if(y & 1)
        {
            cnt++;
            peraNaiSeat += y;
        }
    }
    // cerr << cnt << nl;

    int aroAddKori = 0;

    int takenX = 0, takenY = 0;
    for(auto [x, y] : mp)
    {
        if(y % 2 == 0)
        {
            if(takenX < takenY) swap(takenX, takenY);

            int ordekh = y / 2;
            if(ordekh % 2 == 0) ordekh--;

            int N = n / 2;
            if((takenX + ordekh) <= N && (takenY + (y - ordekh)) <= N) 
            {
                takenX += ordekh;
                takenY += (y - ordekh);
                cnt += 2;
            }
        }
    }
    
    cout << cnt << nl;
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
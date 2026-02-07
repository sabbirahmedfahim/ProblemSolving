#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m; m++;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<int> totZero;
    for (int i = 0; i < n; i++)
    {
        int data = a[i], cnt = 0;
        while(1)
        {
            if(data % 10 != 0) break;

            cnt++;
            data /= 10;
        }
        if(cnt) totZero.push_back(cnt);
    }
    sort(all(totZero)); reverse(all(totZero));

    int totDigits = 0;
    for (int i = 0; i < n; i++)
    {
        int data = a[i];
        while(data)
        {
            totDigits++;
            data /= 10;
        }
    }
    
    int zeroEliminated = 0;
    for (int i = 0; i < totZero.size(); i++)
    {
        if(i % 2 == 0) zeroEliminated += totZero[i];
    }

    // cerr << totDigits << " - " << zeroEliminated << " = " << totDigits - zeroEliminated << nl;
    // cerr << m << nl;

    if(totDigits - zeroEliminated >= m) cout << "Sasha" << nl;
    else cout << "Anna" << nl;
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
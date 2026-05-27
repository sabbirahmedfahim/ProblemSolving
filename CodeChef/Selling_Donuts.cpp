#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    map<int, int> mpa;
    for (int i = 1; i <= n; i++)
    {
        int data; cin >> data;
        mpa[i] = data;
    }

    int cnt = 0;
    // for(auto [key, val] : mpa) cout << key << " " << val << nl;
    while (m--)
    {
        int data; cin >> data;
        if(mpa.count(data) && mpa[data] != 0)
        {
            mpa[data]--;
        }
        else cnt++;
    }
    cout << cnt << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
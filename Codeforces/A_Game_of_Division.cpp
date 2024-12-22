#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> v(n); for(auto &data : v) cin >> data;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bool is_divisible = false;
            for (int x = 0; x < n; x++)
            {
                if(j == x) continue;
                if(abs(v[j] - v[x]) % k == 0) 
                {
                    is_divisible = true; break;
                }
            }
            if(is_divisible == false) 
            {
                cout << "YES" << nl << j+1 << nl; return;
            }
        }
    }
    cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
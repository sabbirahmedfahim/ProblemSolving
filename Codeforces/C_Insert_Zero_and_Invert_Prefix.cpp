// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n), ans; for(auto &data : v) cin >> data;
    if(v.back() == 1)
    {
        cout << "NO" << nl; return;
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(v[i] == 0)
        {
            if(i == 0 || v[i-1] == 0) ans.push_back(0); // i == 0 is the corner case
            else if(v[i-1] == 1)
            {
                int cnt = 0, j = i-1, pos;
                while (j >= 0 && v[j] == 1)
                {
                    cnt++; pos = j; j--; 
                }
                int tmp = cnt;
                while (tmp--)
                {
                    ans.push_back(0);
                }
                ans.push_back(cnt);
                i = pos+1; // next iteration e i-- hobe tai ekta beshi kore sum kore dicch index to maintain the order
            }
        }
    }
    cout << "YES" << nl;
    print(ans);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
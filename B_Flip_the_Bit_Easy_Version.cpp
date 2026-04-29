#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int idx; cin >> idx; idx--;

    int data = a[idx];

    int prev = data;
    int left = 0, right = 0;
    for (int i = idx + 1; i < n; i++)
    {
        if(prev != a[i])
        {
            right++; prev = a[i];
        }

        if(i == n - 1 && i != idx && a[i] == data) right--;
    }
    
    // if(right > 0) right++;

    prev = data;
    for (int i = idx - 1; i >= 0; i--)
    {
        if(prev != a[i])
        {
            left++; prev = a[i];
        }

        if(i == 0 && i != idx && a[i] == data) left--;
    }
    
    // if(left > 0) left++;


    cout << left + right << nl;
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
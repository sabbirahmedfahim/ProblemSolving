#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, k; cin >> n >> m >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
    }
    vector<tuple<int, int, int>> op(m + 1);
    for (int i = 1; i <= m; i++)
    {
        int l,r,d; cin >> l >> r >> d;
        op[i] = {l, r, d};
    }
    
    vector<ll> freqOfOperations(m + 2, 0), diffArray(n + 2, 0);

    while (k--)
    {
        int x, y; cin >> x >> y;
        freqOfOperations[x]++;
        freqOfOperations[y + 1]--;
        // int l, r, data;
        // cin >> l >> r >> data;
        // freqOfOperations[l] += data;
        // freqOfOperations[r + 1] -= data;
    }

    ll curr = 0;
    for (int i = 1; i <= m; i++) 
    {
        curr += freqOfOperations[i];
        freqOfOperations[i] = curr;
        // cout << freqOfOperations[i] << " ";
    }

    for (int i = 1; i <= m; i++)
    {
        auto [l, r, d] = op[i];
        diffArray[l] += 1ll * d * freqOfOperations[i];
        diffArray[r + 1] -= 1ll * d * freqOfOperations[i];
    }

    curr = 0;
    for (int i = 1; i <= n; i++) 
    {
        curr += diffArray[i];
        diffArray[i] = curr;
        // cout << diffArray[i] << " ";
    }

    for (int i = 1; i <= n; i++) 
    {
        cout << a[i] + diffArray[i] << " ";
    }
    cout << nl;

    return 0;
}
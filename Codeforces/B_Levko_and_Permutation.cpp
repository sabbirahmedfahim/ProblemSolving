#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    if((n - k) & 1)
    {
        for (int i = 2; i <= n - k - 1; i += 2)
        {
            swap(a[i], a[i + 1]);
        }
    }
    else 
    {
        for (int i = 1; i <= n - k - 1; i += 2)
        {
            swap(a[i], a[i + 1]);
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if(__gcd(a[i], i) > 1) cnt++;
    }
    // cerr << cnt << ' '<< k << nl;
    // print(a);

    if(cnt != k)
    {
        cout << -1 << nl; return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << nl;


    return 0;
}
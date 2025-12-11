#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int freq[m + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout << freq[i] << nl;
    }
    

    return 0;
}
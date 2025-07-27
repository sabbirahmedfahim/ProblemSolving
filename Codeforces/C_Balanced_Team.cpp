#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));
    // print(a);

    int prev = -1, mxLen = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        if(prev == -1) prev = a[r];

        if(a[r] - prev > 5) 
        {
            while (l <= r && a[r] - a[l] > 5)
            {
                l++;
            }
            prev = a[l];
        }

        mxLen = max(mxLen, r - l + 1 - (r == n));
    }
    
    cout << mxLen << nl;

    return 0;
}
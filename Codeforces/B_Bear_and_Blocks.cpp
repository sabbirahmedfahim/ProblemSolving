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
    deque<int> a(n);
    for(auto &e : a) cin >> e;

    int tot = 0;
    while (tot != n)
    {
        bool neverTouch = true;
        vector<bool> vis(n, false);
        map<int, int> mp;
        for (int i = 1; i < n - 1; i++)
        {
            if(a[i] > 1 && a[i - 1] > 0 && a[i + 1] > 0)
            {
                int lo = 1, hi = a[i] - 1, res = -1;
                while (lo <= hi)
                {
                    int mid = lo + (hi - lo)/2;
                    if(a[i - 1] >= mid && a[i] >= mid && a[i + 1] >= mid)
                    {
                        res = mid;
                        lo = mid + 1;
                    }
                    else hi = mid - 1;
                }
                // cerr << a[i - 1] << " : " << a[i] << " : " << a[i + 1] << " -> ";
                mp[i] = res;
                vis[i] = true;

                neverTouch = false;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(!vis[i] && a[i] > 0) 
            {
                a[i] = 0; neverTouch = false;
            }
            else a[i] = mp[i];
        }
        
        
        if(neverTouch) break;

        // print(a);
        tot++;
    }
    cout << tot << nl;
    

    return 0;
}
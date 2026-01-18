#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n + 1), b(m + 1); // n, m might be different
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
    }

    string s; cin >> s; // k-length

    set<int> st; 
    for(auto e : b) st.insert(e);
    vector<int> mxPref((int)s.size() + 1, 0);

    // consider max (we'll handle min after compliting this, OKAY??)
    int currMx = 0, allTimeMx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'L') currMx--;
        else currMx++;

        allTimeMx = max(allTimeMx, currMx);
        mxPref[i + 1] = allTimeMx;
    }
    
    map<int, int> whoCanWhat;
    for (int i = 1; i <= n; i++)
    {
        auto it = st.upper_bound(a[i]);
        if(it == st.end())
        {
            // whoCanWhat[i] = 0;
        }
        else 
        {
            int dist = (*it) - a[i];
            // cerr << *it << " --> " << a[i] << nl;
            // cerr << "#" << dist << nl;

            int lo = 1, hi = (int)s.size(), res = -1;
            while(lo <= hi)
            {
                int mid = lo + (hi - lo) / 2;
                if(mxPref[mid] >= dist)
                {
                    res = mid;
                    hi = mid - 1;
                }
                else lo = mid + 1;
            }

            if(res != -1)
            {
                whoCanWhat[res]++;
                // cerr << "#" << i << nl;
            }
        }
    }

    // for(auto [x, y] : whoCanWhat) 
    // {
    //     cerr << x << " --> " << y << nl;
    // }
    // cerr << nl;


    vector<int> ANS((int)s.size());
    int curr_res = n;
    for (int i = 0; i < s.size(); i++)
    {
        if(whoCanWhat.count(i + 1))
        {
            curr_res -= whoCanWhat[i + 1];
        }
        ANS[i] = curr_res;
    }


    // consider min
    vector<int> mnPref((int)s.size() + 1, 0);
    int currMn = 0, allTimeMn = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'L') currMn--;
        else currMn++;

        allTimeMn = min(allTimeMn, currMn);
        mnPref[i + 1] = allTimeMn;
    }
    // for (int i = 1; i <= k; i++)
    // {
    //     cout << mxPref[i] << " ";
    // }
    // cout << nl;
    // return;
    

    sort(all(b));
    map<int, int> whoCanDoWhat2;
    for (int i = 1; i <= n; i++)
    {
        int paisiKi = -1;
        int l = 0, h = b.size() - 1;
        while(l <= h)
        {
            int midd = l + (h - l ) / 2;
            if(b[midd] <= a[i])
            {
                paisiKi = b[midd];
                h = midd - 1;
            }
            else l = midd + 1;
        }
        if(paisiKi == -1)
        {
            // whoCanDoWhat2[i] = 0;
        }
        else 
        {
            int dist = paisiKi - a[i];
            // cerr << *it << " --> " << a[i] << nl;
            // cerr << "#" << dist << nl;

            int lo = 1, hi = (int)s.size(), res = -1;
            while(lo <= hi)
            {
                int mid = lo + (hi - lo) / 2;
                if(mnPref[mid] <= dist)
                {
                    res = mid;
                    hi = mid - 1;
                }
                else lo = mid + 1;
            }

            if(res != -1)
            {
                whoCanDoWhat2[res]++;
                // cerr << "#" << i << nl;
            }
        }
    }

    // for(auto [x, y] : whoCanDoWhat2) 
    // {
    //     cerr << x << " --> " << y << nl;
    // }
    // cerr << nl;

    int curr_res2 = n;
    for (int i = 0; i < s.size(); i++)
    {
        if(whoCanDoWhat2.count(i + 1))
        {
            curr_res2 -= whoCanDoWhat2[i + 1];
        }
        ANS[i] = min(ANS[i], curr_res2);
    }


    print(ANS);
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
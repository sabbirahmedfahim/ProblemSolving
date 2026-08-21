#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int forOne(string &s, int n)
{
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1') 
        {
            idx = i; break;
        }
    }
    
    int cnt = 1;
    for (int i = idx; i < n - 1; i++)
    {
        if(s[i] != s[i + 1]) cnt++;
    }
    // cerr << cnt << nl;

    // cerr << totOne << ' ' << totZero << nl;
    
    auto canWePlace = [&](int mid)
    {
        int totOne = count(all(s), '1');
        int totZero = n - totOne;

        int currZero = 0, currOne = 0, curr = 1;
        currOne++; bool who = false;
        for (int i = idx; curr < mid; i++)
        {
            if(s[i] != s[i + 1]) 
            {
                curr++;
                if(who == false) currZero++;
                else currOne++;

                who = !who;
            }
        }

        totOne -= currOne; totZero -= currZero;

        // cerr << currOne << nl;
        // cerr << "#" << mid << " : " << totOne << ' ' << totZero << nl;

        int mnDiff = 1;
        if(min(totZero, totOne) >= 1) mnDiff = 2;
        return abs(totZero - totOne) <= mnDiff;
    };

    int lo = 1, hi = cnt, res = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(canWePlace(mid))
        {
            res = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    
    return res;
}
int forZero(string &s, int n)
{
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0') 
        {
            idx = i; break;
        }
    }
    
    int cnt = 1;
    for (int i = idx; i < n - 1; i++)
    {
        if(s[i] != s[i + 1]) cnt++;
    }

    // cerr << "#" << cnt << nl; 
    
    auto canWePlace = [&](int mid)
    {
        int totOne = count(all(s), '1');
        int totZero = n - totOne;

        int currZero = 0, currOne = 0, curr = 1;
        currZero++; bool who = false;
        for (int i = idx; curr < mid; i++)
        {
            if(s[i] != s[i + 1]) 
            {
                curr++;
                if(who == false) currOne++;
                else currZero++;

                who = !who;
            }
        }

        totOne -= currOne; totZero -= currZero;

        // cerr << currOne << nl;
        // cerr << "#" << mid << " : " << totOne << ' ' << totZero << nl;

        int mnDiff = 1;
        if(min(totZero, totOne) >= 1) mnDiff = 2;
        return abs(totZero - totOne) <= mnDiff;
    };

    int lo = 1, hi = cnt, res = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(canWePlace(mid))
        {
            res = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }

    return res;
}
void solve()
{
    int n; string s; cin >> n >> s;

    int totOne = count(all(s), '1');
    int totZero = n - totOne;
    if(n <= 2)
    {
        cout << 0 << nl; return;
    }
    if(totOne == n || totOne == 0)
    {
        cout << -1 << nl; return;
    }

    // cerr << forOne(s, n) << " : " << forZero(s, n) << nl;

    if(max(forOne(s, n), forZero(s, n)) == -1)
    {
        cout << -1 << nl; return;
    }

    int ans = n - max(forOne(s, n), forZero(s, n));

    cout << ans << nl;
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
#include <bits/stdc++.h>
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int ask(int l, int r)
{
    cout << "? " << l << " " << r << nl;

    int idx; cin >> idx; // 1-based
    return idx;
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    int secondMxPos = ask(1, n);
    // cout << secondMxPos << nl;

    if(secondMxPos != 1)
    {
        int lo = 1, hi = secondMxPos - 1, res = -1;

        int myQuery = ask(1, secondMxPos);
        if(myQuery != secondMxPos) lo = hi + 1;

        while (lo <= hi)
        {
            int mid = lo + ((hi - lo) >> 1);
            // cout << lo << " : " << hi << " --> " << mid << nl;
            if(ask(mid, secondMxPos) == secondMxPos)
            {
                res = mid; 
                lo = mid + 1;
            }
            else hi = mid - 1;
        }
        if(res != -1)
        {
            cout << "! " << res << nl; return 0;
        }
    }
    if(secondMxPos != n)
    {
        int lo = secondMxPos + 1, hi = n, res = -1;

        int myQuery = ask(secondMxPos, n);
        if(myQuery != secondMxPos) lo = hi + 1;

        while (lo <= hi)
        {
            int mid = lo + ((hi - lo) >> 1);
            if(ask(secondMxPos, mid) == secondMxPos)
            {
                res = mid; 
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        if(res != -1)
        {
            cout << "! " << res << nl; return 0;
        }
    }

    return 0;
}
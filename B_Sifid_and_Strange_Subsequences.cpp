// huhh... binary search is only applicable for the monotonic functions
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int n, cur = -1;
int tot_num(int data, vector<int> &a, int idx)
{
    int cnt = 1; 
    for (int i = idx, j = idx + 1; j < n; )
    {
        if(data < a[j]) break;
        // cout << a[i] << " " << a[j] << nl;
        if(abs(a[i] - a[j]) >= data)
        {
            // if(cmd == 1)
            // {
            //     cout << a[i] << " " << a[j] << " --> " << abs(a[i] - a[j]) << nl;
            // }
            i = j, j++, cnt++;
        }
        else j++;
    }

    return cnt;
}
void solve()
{
    /*
    a tiny observaton could be, abs diff will always greater than negative values, i.e
    we'll consider all the negative values blindly.
    */
    cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;
    sort(all(a));
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] >= 0)
        {
            idx = i; break;
        }
    }

    // Case-1: only negative values
    if(a.back() < 0)
    {
        cout << n << nl; return;
    }
    // Case-2: only positive values
    if(a[0] >= 0)
    {
        int hi = n-1, lo = 0, check = -1;
        while (lo <= hi)
        {
            int mid = lo + (hi-lo)/2;
            int target = a[mid];
            int tot = tot_num(target, a, 0);
            if(tot > cur)
            {
                cur = tot, check = target;
                lo = mid + 1;
            }
            else hi = mid - 1;
            // cur = max(cur, tot);
        }
        cout << cur << nl; return;
    }

    // Case-3: pos, neg mixed
    int op1 = 0, op2 = 0;

    op1 += idx;
    int mnDiff = 1E9;
    for (int i = 0; i < idx-1; i++)
    {
        mnDiff = min(mnDiff, abs(a[i] - a[i + 1]));
    }
    if(idx == 1) mnDiff = 0;
    // cout << mnDiff << nl;
    // cout << op1 << nl;

    for (int i = idx-1, j = idx; j < n; )
    {
        if(a[j] > mnDiff) break;
        // if(abs(a[i] - a[j]) >= a[j])
        if()
        {
            i = j, j++, op1++;
        }
        else j++;
    }
    cout << op1 << nl;

    // int mxDiffFromNegSide = -1;
    // if(a[0] < 0) mxDiffFromNegSide = abs(a[0] - a[idx-1]);
    // // cout << mxDiffFromNegSide << nl;

    // if(mxDiffFromNegSide != -1)
    // {
    //     int hi = n-1, lo = idx, check = -1;
    //     while (lo <= hi)
    //     {
    //         int mid = lo + (hi-lo)/2;
    //         int target = a[mid];
    //         int tot = tot_num(target, a, 0);
    //         if(abs(target-a[0]) <= mxDiffFromNegSide && tot > cur)
    //         {
    //           cur = tot, check = target, idx = mid;
    //           lo = mid + 1;
    //         }
    //         else hi = mid - 1;
    //         // cur = max(cur, tot);
    //     }
    //     int op1 = idx + 1 + cur;
    //     // cout << check << nl;
    //     cout << op1 << nl; return;

    // }

    // int hi = n-1, lo = idx, check = -1;
    // while (lo <= hi)
    // {
    //     int mid = lo + (hi-lo)/2;
    //     int target = a[mid];
    //     if(mxDiffFromNegSide != -1) target += mxDiffFromNegSide;
    //     int tot = tot_num(target, a, idx);

    //     if(tot > cur &&  target <= mxDiffFromNegSide)
    //     {
    //         cur = tot, check = target;
    //         lo = mid + 1;
    //     }
    //     else hi = mid - 1;
    //     // cur = max(cur, tot);
    // }
    
    // cout << check << nl;
    // cout << idx << nl;
    // cout << cur << nl;
    
    // idx++;
    // cout << cur + idx << nl;
    // cur = -1;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}


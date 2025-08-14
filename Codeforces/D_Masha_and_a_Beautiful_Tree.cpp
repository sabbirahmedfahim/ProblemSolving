#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int res;
void merge(vector<int> &a, int l, int m, int r)
{
    int leftSz = m-l+1;
    int rightSz = r - m;
    vector<int> L(leftSz), R(rightSz);
    
    bool cng = false;
    int idx = 0;
    for (int i = l; i <= m; i++)
    {
        L[idx] = a[i];
        idx++;
    }
    idx = 0; 
    for (int i = m+1; i <= r; i++)
    {
        R[idx] = a[i];
        idx++;
    }

    int i = 0, j = 0;
    int cur = l; 
    while (i < leftSz && j < rightSz)
    {
        if(L[i] <= R[j])    
        {
            if(a[cur] != L[i]) cng = true;

            a[cur] = L[i];
            i++;
        }
        else 
        {
            if(a[cur] != R[j]) cng = true;

            a[cur] = R[j];
            j++;
        }
        cur++;
    }

    while (i < leftSz) 
    {
        if(a[cur] != L[i]) cng = true;
        a[cur] = L[i], i++, cur++;
    }
    while (j < rightSz)
    {
        if(a[cur] != R[j]) cng = true;
        a[cur] = R[j], j++, cur++;
    } 

    if(cng) res++;
}
void merge_sort(vector<int> &a, int l, int r)
{
    if(l < r)
    {
        int mid = (l+r)/2;
        merge_sort(a, l, mid);
        merge_sort(a, mid+1, r);

        merge(a, l, mid, r); 
    }
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    if(n == 1) // else n is surely even
    {
        cout << 0 << nl; return;
    }

    for (int bit = 0; bit < log2(n) ; bit++) // O(17 * n)
    {
        int value = (1<<bit), res = 0, curr_mx = 0, curr_mn = 1E9;

        for (int i = 0; i < n; i++)
        {
            curr_mx = max(curr_mx, a[i]), curr_mn = min(curr_mn, a[i]);
            res++;

            if(res == value)
            {
                if((curr_mx - curr_mn + 1) > value)
                {
                    // cerr << value << " : " << curr_mx << " " << curr_mn << nl;
                    cout << -1 << nl; return;
                }
                res = 0, curr_mx = 0, curr_mn = 1E9;
            }
        }
    }
    
    // have answer
    merge_sort(a, 0, n - 1); // O(n log n)

    cout << res << nl; 
    res = 0; // reset
}
int_fast32_t main()
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
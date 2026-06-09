#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; n += n;
    vector<int> a(n);
    int zeroL = -1, zeroR = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(zeroL == -1 && a[i] == 0) zeroL = i;
        if(zeroL != -1 && a[i] == 0) zeroR = i;
    }
    

    set<int> st, curr;
    for (int i = 0; i <= n/2; i++)
    {
        st.insert(i);
    }

    int mex = 0;
    
    // odd palindrome-1
    int l = zeroL, r = zeroL;
    curr = st;
    curr.erase(a[l]);
    mex = max(mex, *curr.begin());
    while (l - 1 >= 0 && r + 1 < n && a[l - 1] == a[r + 1])
    {
        curr.erase(a[l - 1]);
        l--, r++;

        mex = max(mex, *curr.begin());
    }
    
    // odd palindrome-2
    l = zeroR, r = zeroR;
    curr = st;
    curr.erase(a[l]);
    mex = max(mex, *curr.begin());
    while (l - 1 >= 0 && r + 1 < n && a[l - 1] == a[r + 1])
    {
        curr.erase(a[l - 1]);
        l--, r++;

        mex = max(mex, *curr.begin());
    }

    int oddMex = mex;

    // even palindrome
    l = zeroL, r = zeroR;
    curr = st;
    curr.erase(a[l]);
    mex = max(mex, *curr.begin());
    while (l <= r)
    {
        if(a[l] == a[r]) curr.erase(a[l]);
        else 
        {
            cout << oddMex << nl; return;
        }
        l++, r--;
    }
    
    l = zeroL, r = zeroR;
    // do not reset curr
    while (l - 1 >= 0 && r + 1 < n && a[l - 1] == a[r + 1])
    {
        curr.erase(a[l - 1]);
        l--, r++;
    }

    mex = max(mex, *curr.begin());
    
    cout << mex << nl;
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
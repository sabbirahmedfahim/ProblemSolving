#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    // for (int i = 0; i < n; i++)
    // {
    //     a[i] = rand() % 10 + 1;
    // }
    // print(a);
    
    vector<int> A = a;
    if(is_sorted(all(a)))
    {
        cout << "YES" << nl; return;
    }

    vector<int> addKorteHobe;
    int currMx = a[0];
    for (int i = 1; i < n; i++)
    {
        currMx = max(currMx, a[i]);
        if(currMx > a[i])
        {
            addKorteHobe.push_back(currMx - a[i]);
            a[i] = currMx;
        }
    }

    sort(all(addKorteHobe));
    for (int i = 1; i < n; i++)
    {
        if(A[i - 1] > A[i]) A[i] += addKorteHobe.back();
    }
    
    if(is_sorted(all(A))){
        // print(A);
        cout << "YES" << nl; return;
    }

    cout << "NO" << nl; return;


    // for(auto e : addKorteHobe)
    // {
    //     if(addKorteHobe.size() > 1000) break;

    //     vector<int> A = B;
    //     for (int i = 1; i < n; i++)
    //     {
    //         if(B[i - 1] > B[i]) B[i] += e;
    //     }
        
    //     if(is_sorted(all(B))){
    //         print(B);
    //         cout << "YES" << nl; return;
    //     }
    // }

    cout << "NO" << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    srand(time(0));

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}
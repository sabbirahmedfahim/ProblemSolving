#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin>>e;
    for(auto &e : b) cin>>e;

    set<int> x;
    for(auto e : a)
    {
        if(e > n) x.insert(e);
    }

    vector<pair<int, int>> res;
    for (int i = 0; i < n; i++)
    {
        if(x.count(a[i]))
        {
            x.erase(a[i]);
            swap(a[i], b[i]); 
            res.push_back({3, i + 1});
        }
    }

    // OK
    // print(a); print(b);
    // cout << nl;

    for (int i = 0; i < n; i++)
    {
        if(a[i] != i + 1)
        {
            for (int j = i + 1; j < n; j++) // will try to reduce
            {
                if(a[j] == i + 1) 
                {
                    int x = i, y = j;
                    cout << y << nl;
                    
                    while (x != y)
                    {
                        // cout << y - 1 << " - " << y << nl; // zero to one based
                        res.push_back({1, y + 1});
                        swap(a[y-1], a[y]);
                        y--;
                    }
                }
            }
        }
    }
    // print(a);
    // for (int i = 0; i < n; i++)
    // {
    //     if(b[i] != i + 1 + n)
    //     {
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if(b[j] == i + 1 + n) 
    //             {
    //                 // res.push_back({2, i + 1});
    //                 // swap(b[i], b[j]);
    //                 // break;

    //                 while (b[i] != i + 1 + n)
    //                 {
    //                     // cout << j << " " << j+1 << nl; // zero to one based
    //                     res.push_back({2, j-1});
    //                     swap(b[j], b[j-1]);
    //                     j--;
    //                 }
    //             }
    //         }
    //     }
    // }
    // print(b);

    // seems ok, but fear of 1709+ op lies
    // print(a);
    // print(b);
    // cout << nl;

    if(res.empty()) cout << 0 << nl;
    else 
    {
        cout <<res.size() << nl;
        for(auto [x, y] : res) cout << x << " " << y << nl;
        // cout << nl;
    }
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
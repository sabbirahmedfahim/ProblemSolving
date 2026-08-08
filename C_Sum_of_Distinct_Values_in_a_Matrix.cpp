#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m, x, y; cin >> n >> m >> x >> y;

    vector<int> a(x), b(y);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    multiset<int> A, B;
    for(auto e : a) A.insert(e);
    for(auto e : b) B.insert(e);

    int op1 = 0, op2 = 0, op3 = 0, op4 = 0;

    // row shob nibo
    set<int> taken;
    for (int i = 0; i < n && !A.empty(); i++)
    {
        op1 += *prev(A.end());
        taken.insert(*prev(A.end()));

        A.erase(prev(A.end()));
    }
    for (int i = 0; i < m - 1 && !B.empty(); i++)
    {
        while (!B.empty())
        {
            if(taken.count(*prev(B.end())))
            {
                B.erase(prev(B.end()));
            }
            else break;
        }
        if(B.empty()) break;
        
        op1 += *prev(B.end());
        
        B.erase(prev(B.end()));
    }

    // cerr << op1 << nl;

    // row shob nibo (2)
    A.clear(); B.clear(); taken.clear();
    for(auto e : a) A.insert(e);
    for(auto e : b) B.insert(e);

    for (int i = 0; i < m - 1 && !B.empty(); i++)
    {
        taken.insert(*prev(B.end()));
        
        op3 += *prev(B.end());
        
        B.erase(prev(B.end()));
    }
    for (int i = 0; i < n && !A.empty(); i++)
    {
        while (!A.empty())
        {
            if(taken.count(*prev(A.end())))
            {
                A.erase(prev(A.end()));
            }
            else break;
        }
        if(A.empty()) break;

        op3 += *prev(A.end());

        A.erase(prev(A.end()));
    }

    // cerr << op3 << nl;

    // col shob nibo
    A.clear(); B.clear(); taken.clear();
    for(auto e : a) A.insert(e);
    for(auto e : b) B.insert(e);

    for (int i = 0; i < m && !B.empty(); i++)
    {
        op2 += *prev(B.end());
        taken.insert(*prev(B.end()));

        B.erase(prev(B.end()));
    }
    // cerr << op2 << nl;
    for (int i = 0; i < n - 1 && !A.empty(); i++)
    {
        while (!A.empty())
        {
            if(taken.count(*prev(A.end())))
            {
                A.erase(prev(A.end()));
            }
            else break;
        }
        if(A.empty()) break;

        op2 += *prev(A.end());
        
        A.erase(prev(A.end()));
    }
    // cerr << op2 << nl;

    // col shob nibo (2)
    A.clear(); B.clear(); taken.clear();
    for(auto e : a) A.insert(e);
    for(auto e : b) B.insert(e);

    for (int i = 0; i < n - 1 && !A.empty(); i++)
    {
        taken.insert(*prev(A.end()));

        op4 += *prev(A.end());
        
        A.erase(prev(A.end()));
    }

    for (int i = 0; i < m && !B.empty(); i++)
    {
        while (!B.empty())
        {
            if(taken.count(*prev(B.end())))
            {
                B.erase(prev(B.end()));
            }
            else break;
        }
        if(B.empty()) break;

        op4 += *prev(B.end());

        B.erase(prev(B.end()));
    }
    // cerr << op4 << nl;

    vector<int> vec = {op1, op2, op3, op4};
    sort(all(vec));

    cout << vec.back() << nl;
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
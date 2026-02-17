#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    deque<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    while(!a.empty())
    {
        int data1 = a.front(), data2 = a.back();

        if(data1 != b.front() && data1 != b.back())
        {
            cout << "Alice" << nl; return;
        } 
        if(data2 != b.front() && data2 != b.back())
        {
            cout << "Alice" << nl; return;
        } 

        a.pop_front();
        if(b.front() == data1) b.pop_front();
        else b.pop_back();
    }

    cout << "Bob" << nl;
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
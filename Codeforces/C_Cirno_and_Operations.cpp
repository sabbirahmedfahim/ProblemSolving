#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
deque<int> c;
int sum(deque<int> x)
{
    if(x.size() == 1) return 0;

    int firstVal = x[0];
    x.pop_front();
    c.push_back(x[0] - firstVal);

    return (x[0] - firstVal) + sum(x);
}
void solve()
{
    int n; cin >> n;
    // variable size is <= 50 .. WoW
    deque<int> a(n);
    for(auto &e : a) cin >> e;

    if(n == 1)
    {
        cout << a[0] << nl; return;
    }
    if(n == 2 && a[0] >= 0 && a[1] >= 0)
    {
        cout << a[0] + a[1] << nl; return;
    }

    int tot_sum = 0;

    while (!a.empty())
    {
        deque<int> b = a;
        reverse(all(b));

        // cout << sum(a) << " " << sum(b) << nl;

        if(sum(a) >= sum(b))
        {
            tot_sum += sum(a);
            c.clear();
            sum(a);
            a.clear();
            a = c;
        }
        else 
        {
            tot_sum += sum(b);
            c.clear();
            sum(b);
            a.clear();
            a = c;
        }
    }
    
    cout << tot_sum << nl;
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
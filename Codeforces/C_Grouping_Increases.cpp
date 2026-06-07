#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int ll
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int getPenalty(vector<int> & x)
{
    int penalty = 0;
    for (int i = 0; i < x.size() - 1; i++)
    {
        if(x[i] < x[i + 1]) penalty++;
    }
    
    return penalty;
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<int> one, two, three, four;
    
    one.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if(!two.empty() && one.back() >= a[i] && two.back() >= a[i])
        {
            if(one.back() > two.back()) two.push_back(a[i]);
            else one.push_back(a[i]);
        }
        else if(two.empty())
        {
            if(i + 1 < n && a[i] >= a[i + 1]) 
            {
                if(one.back() > a[i + 1]) two.push_back(a[i]);
                else one.push_back(a[i]);
            }
            else if(one.back() >= a[i]) one.push_back(a[i]);
            else two.push_back(a[i]);
        }
        else if(one.back() >= a[i]) one.push_back(a[i]);
        else if(one.back() > two.back()) two.push_back(a[i]);
        else one.push_back(a[i]);
    }
    
    int cnt1 = getPenalty(one);
    if(!two.empty()) cnt1 += getPenalty(two);

    // print(one); print(two);

    cout << cnt1 << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}
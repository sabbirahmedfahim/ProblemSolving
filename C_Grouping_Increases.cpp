#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<int> one, two, three, four;
    one.push_back(a.back());

    for (int i = n - 2; i >= 0; i--)
    {
        if(one.back() <= a[i] && !two.empty() && two.back() <= a[i]) 
        {
            if(a[i] - one.back() <= a[i] - two.back()) one.push_back(a[i]);
            else two.push_back(a[i]);
        }
        else if(one.back() <= a[i]) one.push_back(a[i]);
        else two.push_back(a[i]);
    }
    reverse(all(one)); reverse(all(two));
    
    three.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if(three.back() >= a[i] && !four.empty() && four.back() >= a[i]) 
        {
            if(three.back() - a[i] <= four.back() - a[i]) four.push_back(a[i]);
            else four.push_back(a[i]);
        }
        else if(three.back() >= a[i]) three.push_back(a[i]);
        else four.push_back(a[i]);
    }

    // print(one); print(two); 
    // cout << nl;
    // print(three); print(four);
    
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i < one.size(); i++)
    {
        if(one[i - 1] < one[i]) cnt1++;
    }
    for (int i = 1; i < two.size(); i++)
    {
        if(two[i - 1] < two[i]) cnt1++;
    }

    for (int i = 1; i < three.size(); i++)
    {
        if(three[i - 1] < three[i]) cnt2++;
    }
    for (int i = 1; i < four.size(); i++)
    {
        if(four[i - 1] < four[i]) cnt2++;
    }

    // cerr << cnt1 << " " << cnt2 << nl;
    cout << min(cnt1, cnt2) << nl;
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
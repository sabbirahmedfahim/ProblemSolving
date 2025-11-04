#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    deque<int> realPrice(n), has(n);
    for(auto &e : realPrice) cin >> e;
    for(auto &e : has) cin >> e;

    deque<int> due, beshi;
    for (int i = 0; i < n; i++)
    {
        if(realPrice[i] > has[i]) due.push_back(realPrice[i] - has[i]);
        else beshi.push_back(has[i] - realPrice[i]);
    }
    if(due.size() > 0) sort(all(due));
    if(beshi.size() > 0) sort(all(beshi));

    int cnt = 0;
    while (!beshi.empty() && !due.empty())
    {
        int need = due.front(); due.pop_front();
        int curr = beshi.front(); beshi.pop_front();
        
        if(curr >= need) cnt++;
        else if(beshi.size() > 0) 
        {
            cnt++; beshi.pop_front();
            due.push_front(need);
        }
    }
    
    cnt += beshi.size() / 2;

    cout << cnt << nl;
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
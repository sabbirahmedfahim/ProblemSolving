#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; deque<int> dq(n); for(auto &data : dq) cin >> data;
    while (!dq.empty() && dq.front() == 0) dq.pop_front();
    while (!dq.empty() && dq.back() == 0) dq.pop_back();
    if(dq.empty()) 
    {
        cout << 0 << nl; return;
    }
    // print(dq);
    int cnt = 1;
    int sz = 0;
    for (int i = 1; i < dq.size(); i++)
    {
        if(dq[i] == 0 && dq[i-1] != 0) cnt++;
        else sz++;
    }
    if(sz == dq.size()) cout << 0 << nl;
    else if(cnt == 0 || cnt == 1) cout << 1 << nl;
    else cout << 2 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
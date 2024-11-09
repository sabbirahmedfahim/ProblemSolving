#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    priority_queue<int> pq;
    for (int i = 1; i <= n; i++)
    {
        pq.push(i);
    }

    cout << 2 << nl;
    while (pq.size() > 1)
    {
        int r = pq.top();
        pq.pop();
        int l = pq.top();
        pq.pop();
        cout << r << " " << l << nl;
        pq.push(((l+r+1)/2)); // -> +1
        // to get round number, added '1' in the calculation [(l+r+1)/2] -> +1
    }
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}

// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k; vector<int> v(n); for(auto &c : v) cin >> c;
    map<int, int> leftFreq, rightFreq;
    int kFreq = 0;
    for(auto data : v) 
    {
        if(data == k) kFreq++;
    }
    for (int i = 0; i < n; i++)
    {
        if(v[i] == k) break;
        leftFreq[v[i]]++;
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(v[i] == k) break;
        rightFreq[v[i]]++;
    }
    

    priority_queue<int> pq, tmp; int cnt = 0;
    if(leftFreq.empty() && rightFreq.empty())
    {
        cout << 0 << nl; return;
    }
    if(leftFreq.empty())
    {
        cout << 0 << nl; return;
    }
    else 
    {
        for(auto [key, val] : leftFreq) 
        {
            // cout << key << " " << val << nl;
            if(val > kFreq) cnt++;
        }
    }
    if(rightFreq.empty())
    {
        cout << 0 << nl; return;
    }
    else 
    {
        for(auto [key, val] : rightFreq) 
        {
            // cout << key << " " << val << nl;
            if(val > kFreq) cnt++;
        }
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
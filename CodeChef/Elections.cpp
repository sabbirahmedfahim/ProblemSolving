#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    ll n, x; cin >> n >> x;
    vector<ll> a(n), b(n);
    for(auto &data : a) cin >> data;
    for(auto &data : b) cin >> data;

    ll cnt = 0;
    deque<ll> minVoteNeeds;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > b[i]) cnt++;
        else if(a[i] == b[i]) minVoteNeeds.push_back(1);
        else minVoteNeeds.push_back(b[i] - a[i] + 1);
    }

    sort(minVoteNeeds.begin(), minVoteNeeds.end());
    for (int i = 0; i < minVoteNeeds.size(); i++)
    {
        if(minVoteNeeds.front() <= x)
        {
            cnt++;
            x -= minVoteNeeds.front();
            minVoteNeeds.pop_front();
        }
        else break;
    }
    
    cout << ((cnt >= (n/2)+1)? "YES" : "NO") << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
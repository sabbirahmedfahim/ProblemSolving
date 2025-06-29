#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, x; cin >> n >> x;
    deque<ll> a(n); for(auto &e : a) cin>>e;

    sort(all(a));

    int cnt = 0;
    while (a.size() >= 2)
    {
        if((a[0] + a.back()) <= x) 
        {
            cnt++; 
            a.pop_front(); a.pop_back();
        }
        else a.pop_back(), cnt++;
    }

    cnt += a.size();

    cout << cnt << nl;

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<ll> a(n), b(n), c(n);
    for(auto &data : a) cin >> data;
    for(auto &data : b) cin >> data;
    for(auto &data : c) cin >> data;

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll time, submission; cin >> time >> submission;
        if(submission <= 0) continue;
        else
        {
            ans += max(c[i], a[i]-b[i]*time-50*(submission-1));
        }
    }
    cout << ans << nl;
    

    return 0;
}
// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); 

    map<ll, ll> mp; mp[0]++; ll sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        // sum = (sum+n)%n; // it can not handle negative modulus
        sum = ((sum%n)+n)%n;
        /*
        // cnt += mp.count(sum); 
        why are mp.count(x) and mp[x] not equal?
        Big Lesson: mp.count(x) returns TRUE/FALSE, total count return korena !!!
        */
        cnt += mp[sum]; 
        mp[sum]++;
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    solve();
 
    return 0;
}

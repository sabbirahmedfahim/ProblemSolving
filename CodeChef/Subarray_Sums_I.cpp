// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int n, x; cin >> n >> x;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;
    int cnt = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        ll sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];
            if(sum == x)
            {
                cnt++; break;
            }
            // if(sum > x) break;
        }
    }
    cout << cnt << nl;

    return 0;
}
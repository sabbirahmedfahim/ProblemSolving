#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
long long maxBallsCollected(vector<long long>& a) {
    sort(a.rbegin(), a.rend());  // Sort in descending order
    long long total_balls = 0;
    long long max_balls = a[0];

    for (long long i = 0; i < a.size(); i++) {
        if (max_balls <= 0) break;
        long long take = min(a[i], max_balls);
        total_balls += take;
        max_balls = take - 1;
    }

    return total_balls;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    ll n; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << maxBallsCollected(v) << nl;
    

    return 0;
}
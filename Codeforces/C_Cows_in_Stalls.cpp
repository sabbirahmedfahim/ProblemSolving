#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
bool canWePlace(vector<int> stalls, int cows, int dist) 
{
    int cnt = 1, last = stalls[0];

    for (int i = 1; i < stalls.size(); i++)
    {
        if(stalls[i] - last >= dist)
        {
            last = stalls[i]; cnt++;
        }
        if(cnt == cows) return true;
    }
    return cnt >= cows;
}
void solve()
{
    int n, cows; cin >> n >> cows;
    vector<int> stalls(n); for(auto &e : stalls) cin >> e;
    sort(all(stalls));

    int l = 1, r = 1E9, mid, ans = -1;

    while (l <= r)
    {
        mid = l + (r-l)/2;
        if(canWePlace(stalls, cows, mid))
        {
            ans = mid; l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << ans << nl;
}
void solve2()
{
    int n, cows; cin >> n >> cows;
    vector<int> stalls(n); for(auto &e : stalls) cin >> e;
    sort(all(stalls));

    int ans = -1;

    for (int i = 1; i <= 1E9; i++) // search space
    {
        if(canWePlace(stalls, cows, i)) ans = max(ans, i);
        else break;
    }

    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve(); // optimized
    // solve2(); // naive

    return 0;
}
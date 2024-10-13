// unsolved
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll n, x; cin >> n >> x;
    vector<ll> v(n);
    ll total = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i]; total += v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int cnt = 0;
    while (total != 0)
    {
        bool flag = false;
        int iterationCount = 0;
        for (int i = 0; i < n; i++)
        {
            if(iterationCount == x) 
            {
                flag = true;
                break;
            }
            if(v[i] > 0) 
            {
                v[i]--;
                iterationCount++;
                total--;
            }
        }
        if(!flag) x--;
        if(x == 0) break;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
// wrong answer on pre-test 2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, r; cin >> n >> r;
    vector<int> v(n);
    int doubleHappy = 0;
    int singleHappy = 0;
    int extra = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
        if(v[i] == 1) singleHappy++;
        else if(v[i] > 1) 
        {
            if(v[i]%2 == 0) 
            {
                doubleHappy += v[i]; r -= v[i]/2;
            }   
            else 
            {
                doubleHappy += (v[i] - 1); r -= v[i]/2; extra++; // extra means single person
            }
        }
    }
    int ans = doubleHappy;
    if(extra > 0)
    {
        if(extra%2 == 0) r -= (extra/2);
        else r -= (extra/2)+1;
    }
    if(r >= singleHappy) ans += singleHappy;
    else ans += r;
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

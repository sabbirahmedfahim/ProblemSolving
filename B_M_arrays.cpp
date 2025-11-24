// Expected : TLE
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    multiset<int> ml;
    for(auto e : a) ml.insert(e);

    int cnt = 0;
    map<int, int> freq;
    for(auto e : a) freq[e]++;
    while (!ml.empty())
    {
        int prev = -1;
        // print(ml);
        vector<int> willDel;
        for(auto e : ml)
        {
            if(prev == -1) 
            {
                prev = e;
                freq[e]--;
                if(freq[e] == 0) freq.erase(e);
                willDel.push_back(prev);
            }
            else 
            {
                if(ml.count(k - prev) && freq.count(k - prev))
                {
                    prev = k - prev;
                    willDel.push_back(prev);
                    freq[prev]--;
                    if(freq[prev] == 0) freq.erase(prev);
                }
                else if((prev + e) % k == 0 && freq.count(e))
                {
                    prev = e;
                    willDel.push_back(prev);
                    freq[prev]--;
                    if(freq[prev] == 0) freq.erase(prev);
                }
            }
        }
        for(auto e : willDel)
        {
            auto it = ml.find(e);
            ml.erase(it);
        }

        cnt++;
    }
    
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k; deque<ll> dq(n); for(auto &c : dq) cin >> c;
    sort(all(dq));

    int cnt = 0;
    int move = n;

    bool alice = true; // wants to minimize the score
    ll cur;

    map<ll, ll> mp;
    for(auto data : dq) mp[data]++;
    // for(auto [key, val] : mp) cout << key << " " << val << nl; cout << nl;

    while (move--)
    {
        // print(dq);
        if(alice)
        {
            if(!mp.count(k-dq.front()))
            {
                cur = dq.front();
                mp[dq.front()]--; if(mp[dq.front()] == 0) mp.erase(dq.front());
                dq.pop_front();
            }
            else
            {
                cur = dq.back();
                mp[dq.back()]--; if(mp[dq.back()] == 0) mp.erase(dq.back());
                dq.pop_back();
            }
        }
        else
        {
            if(mp.count(k-cur))
            {
                // if(k-cur == cur && mp[(k-cur) == 1]) 
                // {
                //     mp[dq.front()]--; if(mp[dq.front() == 0]) mp.erase(dq.front());
                //     dq.pop_front();
                //     continue;
                // }
                // cout << "##" << " ";
                // cout << k-cur << nl;
                for (int i = 0; i < n; i++)
                {
                    if(dq[i] == (k-cur)) 
                    {
                        cnt++; 
                        mp[dq[i]]--;
                        if(mp[dq[i]] == 0) mp.erase(dq[i]);
                        dq[i] = -100;
                        sort(all(dq)); 
                        // mp[dq.front()]--; if(mp[dq.front()] == 0) mp.erase(dq.front());
                        dq.pop_front();
                        break;
                    }
                }
            }
            else
            {
                if(dq.front() + dq.back() > k)
                {
                    mp[dq.back()]--; if(mp[dq.back()] == 0) mp.erase(dq.back());
                    dq.pop_back();
                }
                else 
                {
                    mp[dq.front()]--; if(mp[dq.front()] == 0) mp.erase(dq.front());
                    dq.pop_front();
                }
            } 
        }
        alice = !alice;
        // print(dq);
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
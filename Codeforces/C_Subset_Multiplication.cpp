#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool beautifulArray(vector<int> b)
{
    for (int i = 1; i < b.size(); i++)
    {
        if(b[i] % b[i - 1] != 0) return false;
    }
    return true;
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;
    set<int> divisors;
 
    if(beautifulArray(a))
    {
        cout << 1 << nl; return;
    }
 
    for(auto e : a)
    {
        // if(divisors.count(e)) continue;
 
        for (int i = 2; i * i <= e; i++)
        {
            if(e % i == 0)
            {
                divisors.insert(i);
                divisors.insert(e / i);
            }
        }
        divisors.insert(e);
    }
 
    for (auto e : divisors)
    {
        vector<int> b = a;
        if(b[0] % e == 0 && b[1] % (b[0]/e) == 0) b[0] /= e;

        bool ok = true;
 
        for (int i = 1; i < n && ok; i++)
        {
            if(b[i] == b[i - 1]) continue;
            if(b[i]%e != 0) 
            {
                if(b[i] % b[i - 1] == 0) continue;
                else ok = false;
            }
 
            if((b[i]/e) % b[i - 1] == 0) b[i] /= e; 
            else if(b[i]%b[i - 1] != 0) ok = false;
        }
 
        // cout << e << " : ";
        // print(b);
 
        // if(beautifulArray(b))
        if(ok)
        {
            cout << e << nl; return;
        }
    }
    
    
    cout << "If it hits, wrong answer" << nl;
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
// used test case as hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
ll Pow(ll a, ll b) // O(log b)
{ 
    // a %= MOD;
    // if (a < 0) a += MOD;
    ll ans = 1;
    while (b) {
        if (b & 1) {
            ans = ans * a;
            // ans = (ans * a) % MOD;
        }
        a = a * a;
        // a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
}
void solve()
{
    int n; cin >> n;
    map<int, int> primeFact;

    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            primeFact[i]++;
            n /= i;
        }
    }
    if(n > 1) primeFact[n]++;

    int a = -1, b = -1, c = -1;
    for(auto &[x, y] : primeFact)
    {
        // cerr << x << " --> " << y << nl;
        a = x; 
        y--;
        break;
    }
    
    if(primeFact[a] == 0) primeFact.erase(a);

    int who;
    for(auto &[x, y] : primeFact)
    {
        if(a == x)
        {
            if(y > 1) 
            {
                b = x + x;
                y -= 2;
                who = x;
                break;
            }
        }
        else 
        {
            b = x;
            y--;
            who = x;
            break;
        }
    }
    
    if(b != -1 && primeFact[who] == 0) primeFact.erase(who);
    // for(auto &[x, y] : primeFact)
    // {
    //     cerr << x << " --> " << y << nl;
    // }
    // return;

    // cout << a << " : " << b << nl;

    for(auto [x, y] : primeFact)
    {
        // cerr << x << " --> " << y << nl;
        if(c == -1) c = Pow(x, y);
        else c *= Pow(x, y);
    }

    // cout << a << " : " << b << " : " << c << nl;
    set<int> st;
    if(a != -1) st.insert(a);
    if(b != -1) st.insert(b);
    if(c != -1) st.insert(c);

    if(st.size() == 3) 
    {
        cout << "YES" << nl;
        print(st);
    }
    else cout << "NO" << nl;
    
    // cout << primeFact.size() << nl;
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
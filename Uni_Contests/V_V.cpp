#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 1E4;
vector<bool> comp(N+1); // we know that, vector e initially zero e thake
vector<int> lp(N+1); 
int cs = 1;
void pre_calculation()
{
    // pre-calculation
    comp[1] = true;
    for (int i = 2; i <= N; i++)
    {
        if(comp[i]) continue;
        lp[i] = i;

        for (int j = i*2; j <= N; j+=i)
        {
            comp[j] = true;
            if(lp[j] == 0) lp[j] = i;
        }
    }
    
    // for (int i = 1; i <= 100; i++)
    // {
    //     if(lp[i] != 0) cout << i << " -> " << lp[i] << nl;
    // }
}
void solve()
{
    int n; cin >> n; 

    map<int, int> mp;
    for (int i = 2; i <= n; i++)
    {
        int data = i;
        while (data != 1)
        {
            mp[lp[data]]++;
            data /= lp[data];
        }
    }
    
    // for(auto [key, val] : mp) cout << key << " " << val << nl; cout << nl;

    int sz = mp.size();

    cout << "Case " << cs++ << ": " << n << " = ";
    for(auto [key, val] : mp)
    {
        if(sz == 1) cout << key << " (" << val << ")"; 
        else cout << key << " (" << val << ") * "; 
        sz--;
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    pre_calculation();

    int t; cin >> t; 
    for (int op = 1; op <= t; op++)
    {
        // cout << "TEST CASE-" << op << nl;
        solve();
    }
    

    return 0;
}
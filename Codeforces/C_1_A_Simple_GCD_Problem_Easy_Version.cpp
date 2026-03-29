#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if(x % i == 0) return false;
    }
    
    return true;
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e; // useless i guess

    int cnt = 0;

    for (int i = 0; i < n - 1; )
    {
        if(a[i] == a[i + 1]) 
        {
            int data = a[i];
            while(i < n && a[i] == data) i++;
        }
        else 
        {
            int GCD = __gcd(a[i], a[i + 1]);
            int curr = a[i] / GCD;

            if(GCD == 1) cnt++;
            else if(isPrime(curr) == false) cnt++;

            i++;
        }
    }
    
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}
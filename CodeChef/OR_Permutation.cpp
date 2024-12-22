#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void rec(int n) // don't be confused. used recursion to recap. n to 1 for loop is enough
{
    if(n == 0) return;
    cout << n << " ";
    rec(n-1);
}
void solve()
{
    // OR er khetre kono bit eliminated hoy na. used the hacks hahaha
    int n; cin >> n;
    rec(n); cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
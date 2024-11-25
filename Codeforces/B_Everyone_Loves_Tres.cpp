// resolved -> https://www.youtube.com/watch?v=tRmhBKjLmF0
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    if(n == 1 || n == 3) cout << -1 << nl;
    else if(n%2==0)
    {
        string s = ""; s.insert(0, n-2, '3');
        cout << s << "66" << nl;
    }
    else 
    {
        string s = ""; s.insert(0, n-5, '3');
        cout << s << "36366" << nl;
    }
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
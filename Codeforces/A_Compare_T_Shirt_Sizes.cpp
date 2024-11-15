#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    string a, b; cin >> a >> b;
    if(a.back() == 'S' && b.back() == 'M' || a.back() == 'S' && b.back() == 'L' ||
    a.back() == 'M' && b.back() == 'L') cout << '<' << nl;
    else if(a.back() == 'M' && b.back() == 'S' || a.back() == 'L' && b.back() == 'S' ||
    a.back() == 'L' && b.back() == 'M') cout << '>' << nl;
    else
    {
        if(a == b) cout << '=' << nl;
        else if(a.back() == 'S')
        {
            if(a.size() > b.size()) cout << '<' << nl;
            else cout << '>' << nl;
        }
        else if(a.back() == 'L')
        {
            if(a.size() > b.size()) cout << '>' << nl;
            else cout << '<' << nl;
        }
    }
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
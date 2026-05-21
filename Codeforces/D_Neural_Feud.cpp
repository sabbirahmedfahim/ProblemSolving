#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    if(n == 1) cout << "walk" << nl;
    if(n == 2) cout << "no" << nl;
    if(n == 3) cout << "no" << nl;
    if(n == 4) cout << "no" << nl;
    if(n == 5) cout << "yes" << nl;
    if(n == 6) cout << "yes" << nl;
    if(n == 7) cout << "backwards" << nl;
    if(n == 8) cout << "seven" << nl;

    return 0;
}
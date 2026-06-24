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
    // vector<int> a(n);
    // for(auto &e : a) cin >> e;

    int tmp = n; 
    bool ok = false;
    while (tmp)
    {
        if(tmp % 10 == 7) ok = true;

        tmp /= 10;
    }
    
    if(!ok && n % 7 != 0) cout << 0 << nl;
    if(!ok && n % 7 == 0) cout << 1 << nl;
    if(ok && n % 7 != 0) cout << 2 << nl;
    if(ok && n % 7 == 0) cout << 3 << nl;

    return 0;
}
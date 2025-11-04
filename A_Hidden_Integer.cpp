#include <bits/stdc++.h>
// #define nl '\n'
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool ask(int mid)
{
    cout << "? " << mid << nl;
    string s; cin >> s;

    return s == "YES";
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    int lo = 1, hi = 1E9, x = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(ask(mid))
        {
            lo = mid + 1;
        }
        else
        {
            x = mid;
            hi = mid - 1;
        }
    }
    
    cout << "! " << x << nl;


    return 0;
}
#include <bits/stdc++.h>
// #define nl '\n'
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool ask(int mid)
{
    cout << mid << nl;
    string s; cin >> s;

    return s == "<";
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    int lo = 1, hi = 1E6, x = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(ask(mid))
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
            x = mid;
        }
    }
    
    cout << "! " << x << nl;


    return 0;
}
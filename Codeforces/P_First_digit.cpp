#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int last;

    while (n)
    {
        last = n;
        n /= 10;
    }

    if(last & 1) cout << "ODD" << nl;
    else cout << "EVEN" << nl;

    return 0;
}
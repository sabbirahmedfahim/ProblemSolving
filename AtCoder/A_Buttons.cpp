#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int a, b; cin >> a >> b;
    if(a == b) cout << a+b << nl;
    else cout << max(a, b) * 2 - 1 << nl;
 
    return 0;
}
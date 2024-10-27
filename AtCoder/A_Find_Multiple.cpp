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

    int a, b, c; cin >> a >> b >> c;
    a = min(a, b);
    b = max(a, b);
    int i = 1;
    while (c*i <= b)
    {
        if(c*i >= a && c*i <= b) 
        {
            cout << c*i; return 0;
        }
        i++;
    }
    cout << -1 << nl;

    return 0;
}
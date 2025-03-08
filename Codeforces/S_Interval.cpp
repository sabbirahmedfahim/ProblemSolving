#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    double x; cin >> x;

    if(x < 0 || x > 100) 
    {
        cout << "Out of Intervals" << nl; return 0;
    }

    if(x >= 0 && x <= 25) cout << "Interval [0,25]" << nl;
    if(x > 25 && x <= 50) cout << "Interval (25,50]" << nl;
    if(x > 50 && x <= 75) cout << "Interval (50,75]" << nl;
    if(x > 75 && x <= 100) cout << "Interval (75,100]" << nl;

    return 0;
}
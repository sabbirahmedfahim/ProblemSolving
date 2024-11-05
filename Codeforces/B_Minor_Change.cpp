#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    string a, b; cin>> a >> b;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != b[i]) cnt++;
    }
    cout << cnt << nl;

    return 0;
}
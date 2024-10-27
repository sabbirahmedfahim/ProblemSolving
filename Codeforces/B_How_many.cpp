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

    int s, t; cin >> s >> t;
    int cnt = 0;
    for (int a = 0; a <= 100; a++)
    {
        for (int b = 0; b <= 100; b++)
        {
            for (int c = 0; c <= 100; c++)
            {
                if(a+b+c <= s && a*b*c <= t) cnt++;
            }  
        }
    }
    cout << cnt << nl;

    return 0;
}
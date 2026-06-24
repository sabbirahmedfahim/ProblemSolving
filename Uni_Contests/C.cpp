#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    
    int x; cin>> x;
    int arrival, service, patience; 
    cin >> arrival >> service >> patience;
    cout << 1 << nl;
    arrival += service;

    for (int i = 2; i <= n; i++)
    {
        int x; cin >> x;

        int currArrival, currService, currPatience; 
        cin >> currArrival >> currService >> currPatience;
    
        if(arrival <= currArrival + currPatience)
        {
            cout << x << nl;
            if(arrival > currArrival) currArrival = arrival;
            arrival = currArrival + currService;        
        }

        // cerr << arrival << nl;
    }
    

    return 0;
}
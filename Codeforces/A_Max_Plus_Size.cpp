#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        int oddSz = 0;
        int evenSz = 0;
        int oddMax = 0;
        int evenMax = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(i%2 == 0) 
            {
                oddSz++;
                if(v[i] > oddMax) oddMax = v[i];
            }
            else 
            {
                evenSz++;
                if(v[i] > evenMax) evenMax = v[i];
            }
        }
        if(evenMax + evenSz >= oddMax + oddSz) cout << evenMax+evenSz << nl;
        else cout << oddMax+oddSz << nl;
    }

    return 0;
}
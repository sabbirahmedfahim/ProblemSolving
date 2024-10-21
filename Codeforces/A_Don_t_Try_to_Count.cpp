// youtube
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
1 <= n*m <= 25
len(x) = n, len(s) = m
x ---------> xx -> xxxx -> xxxxxxxx -> xxxxxxxxxxxxxxx -> xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
x --------->  2 ->   4  ->    8     ->       16        ->              32     
operations:   1      2        3               4                         5    [2^n]
Try doing the operation 5 times
Even after 5 operations, s is not part of x -> print(-1)
GIven Condition, len(n*m <= 25)
*/ 
int main()
{
    FAJR_BOOST()

    int t; cin >> t;
    while (t--)
    {
        int n, m; string x, s;
        cin >> n >> m >> x >> s;
        int cnt = 6;
        bool isFound = false;
        int op = 0;
        while (cnt --)
        {
            if(x.find(s) != string::npos)
            {
                isFound = true; break;
            }
            op++; x += x;
        }
        /*
        op: 1 -> 2  -> 3  -> 4  -> 5   -> 6
            n -> 2n -> 4n -> 8n -> 16n -> 32n
        */
        if(isFound) cout << op << nl;
        else cout << -1 << nl;
    }

    return 0;
}
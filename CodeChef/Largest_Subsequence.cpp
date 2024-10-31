#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    int aSt = -1, aEnd = -1, bSt = -1, bEnd = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a' && aSt == -1)
        {
            aSt = i; aEnd = i;
        }
        else if(s[i] == 'b' && bSt == -1)
        {
            bSt = i; bEnd = i;
        }
        else if(s[i] == 'a') aEnd = i;
        else bEnd = i;
    }
    if(aSt == -1) cout << bEnd - bSt + 1 << nl;
    else if(bSt == -1) cout << aEnd - aSt + 1 << nl;
    else cout << max((aEnd-aSt+1), (bEnd-bSt+1)) << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
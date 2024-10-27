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

    string s; cin >> s;
    if(s.size() == 4) cout << s << nl;
    else
    {
        int sz = 4 - s.size();
        string s2;
        while (sz--)
        {
            s2.push_back('0');
        }
        cout << s2 + s << nl;
    }

    return 0;
}
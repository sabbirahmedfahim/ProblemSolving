#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
findings: 
i)  length of the number(ans) will always even
*/
void solve()
{
    int n; cin >> n;
    int sz = 0, tmp = n;
    while (tmp)
    {
        sz++; tmp/= 10;
    }

    if(sz%2)
    {
        sz++;
        int half = sz/2;
        string s;
        for (int i = 0; i < half; i++) s += '4';
        for (int i = 0; i < half; i++) s += '7';
        cout << s << nl;
    }
    else 
    {
        set<ll> st;
        for (int mask = 0; mask < (1<<sz); mask++)
        {
            ll four = 0, seven = 0, data = 0, gun = 1;
            for (int i = 0; i < sz; i++)
            {
                if((mask >> i) & 1)
                {
                    four++; data += (1ll * 4*gun);
                }
                else 
                {
                    seven++; data += (1ll * 7*gun);
                }
                gun *= (1ll * 10); // integer overflow -_-
            }
            if(four == seven) st.insert(data);
        }

        sz += 2; // max 10 digit [look at the constraints]
        for (int mask = 0; mask < (1<<sz) && sz <= 10; mask++)
        {
            ll four = 0, seven = 0, data = 0, gun = 1;
            for (int i = 0; i < sz; i++)
            {
                if((mask >> i) & 1)
                {
                    four++; data += (1ll * 4*gun);
                }
                else 
                {
                    seven++; data += (1ll * 7*gun);
                }
                gun *= (1ll * 10); // integer overflow -_-
            }
            if(four == seven) st.insert(data);
        }
        // print(st);
        auto it = st.lower_bound(n);
        if(*it == n) cout << n << nl;
        else 
        {
            auto it2 = st.upper_bound(n);
            cout << *it2 << nl;
        }
    }
}
void doingMath()
{
    int s = 0, gun = 1;
    for (int i = 5; i >= 1; i--)
    {
        s += (i * gun);
        cout << s << " ";
        gun *= 10;
    }
    cout << nl << s << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();
    // doingMath();


    return 0;
}

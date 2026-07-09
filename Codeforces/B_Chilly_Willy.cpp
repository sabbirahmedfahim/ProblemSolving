#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int getAns(int curr, int n)
{
    while (curr % n != 0)
    {
        curr++;
    }
    
    return curr;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    if(n <= 2)
    {
        cout << -1 << nl; return 0;
    }
    if(n == 3)
    {
        cout << 210 << nl; return 0;
    }

    string s = "1";
    for (int i = 0; i < n - 1; i++)
    {
        s += "0";
    }
    
    // cout << getAns(stoll(s), 210) << " : ";

    n -= 2;
    n %= 6;

    // cerr << n << nl;

    int sz = s.size();

    if(n == 1) 
    {
        s[sz - 3] = '1';
        s[sz - 2] = '1';
    }
    if(n == 2) 
    {
        s[sz - 2] = '5';
    }
    if(n == 3) 
    {
        s[sz - 2] = '8';
    }
    if(n == 4) 
    {
        s[sz - 3] = '1';
        s[sz - 2] = '7';
    }
    if(n == 5) 
    {
        s[sz - 2] = '2';
    }
    if(n == 0) 
    {
        s[sz - 3] = '2';
    }

    cout << s << nl;

    return 0;
}
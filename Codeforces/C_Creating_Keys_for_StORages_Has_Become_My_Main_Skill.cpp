#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;

    if(n == 1)
    {
        cout << x << nl; return;
    }

    vector<int> bits;
    vector<int> v1;
    for (int bit = 0; bit < 30; bit++)
    {
        if((x>>bit) & 1) bits.push_back(1);
        else bits.push_back(0);
    }
    // print(bits);
    
    int cur_n;
    for (int i = 0; i <= x && (cur_n < n); i++)
    {
        bool isMatch = true;
        // s.insert(i); cur_n++;
        for (int bit = 0; bit < 30; bit++)
        {
            if(bits[bit] == 0 && ((i>>bit) & 1 == 1))
            {
                isMatch = false; break;
            }
        }
        if(isMatch)
        {
           v1.push_back(i); cur_n++;
        }
        else break; // break is a crutial
    }
    int OR = 0;
    for(auto e : v1) OR |= e;
    if(OR == x) // jodi mile jay tahole ok
    {
        sort(all(v1));
        while (v1.size() < n)
        {
            v1.push_back(v1.front());
        }

        OR = 0;
        for(auto e : v1) OR |= e;
        // cout << OR << " - ";

        print(v1);
        return;
    }
    else // jodi na mile shob bit on kore dei
    {
        vector<int> v2; v2.push_back(x);
        cur_n = 1;
        for (int i = 0; i <= x && (cur_n < n); i++)
        {
            bool isMatch = true;
            for (int bit = 0; bit < 30; bit++)
            {
                if(bits[bit] == 0 && ((i>>bit) & 1 == 1))
                {
                    isMatch = false; break;
                }
            }
            if(isMatch)
            {
                v2.push_back(i); cur_n++;
            } 
            else break;
        }

        sort(all(v2));
        while (v2.size() < n)
        {
            v2.push_back(v2.front());
        }

        OR = 0;
        for(auto e : v1) OR |= e;
        // cout << OR << " - ";

        print(v2);
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
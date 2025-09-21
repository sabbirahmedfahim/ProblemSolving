#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    int zero = count(all(s), '0');

    // if(zero == 0 || zero == n)
    // {
    //     cout << "YES" << nl; return;
    // }

    
    // s (all ) 
    bool ok = true;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0')
        {
            if(i + 1 < s.size() && s[i + 1] == '0') i++;
            else if(i + 2 < s.size() && s[i + 2] == '0') i += 2;
            else ok = false;
        }
    }
    if(ok) 
    {
        // cerr << "s, works" << nl;
        cout << "YES" << nl; return;
    }

    // s (try again) 
    ok = true;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0')
        {
            if(i + 2 < s.size() && s[i + 1] == '0' && s[i + 2] == '0') i += 2;
            else if(i + 1 < s.size() && s[i + 1] == '0') i++;
            else ok = false;
        }
    }
    if(ok) 
    {
        // cerr << "s, works" << nl;
        cout << "YES" << nl; return;
    }

    // s1
    ok = true;
    string s1;
    for (int i = 0; i < n; i++)
    {
        if((i == 0 || i == (n - 1)) && s[i] == '0');
        else s1.push_back(s[i]);
    }
    // cerr << s1 << nl;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == '0')
        {
            if(i + 1 < s1.size() && s1[i + 1] == '0') i++;
            else if(i + 2 < s1.size() && s1[i + 2] == '0') i += 2;
            else ok = false;
        }
    }
    
    if(ok) 
    {
        // cerr << "s1, works" << nl; 
        cout << "YES" << nl; return;
    }

    // s2
    ok = true;
    string s2;
    for (int i = 0; i < s.size(); i++)
    {
        if(i == 0 && s[i] == '0');
        else s2.push_back(s[i]);
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if(s2[i] == '0')
        {
            if(i + 1 < s2.size() && s2[i + 1] == '0') i++;
            else if(i + 2 < s2.size() && s2[i + 2] == '0') i += 2;
            else ok = false;
        }
    }

    if(ok) 
    {
        // cerr << "s2, works" << nl; 
        cout << "YES" << nl; return;
    }

    // s3
    ok = true;
    string s3;
    for (int i = 0; i < s.size(); i++)
    {
        if(i == (n - 1) && s[i] == '0');
        else s3.push_back(s[i]);
    }
    for (int i = 0; i < s3.size(); i++)
    {
        if(s3[i] == '0')
        {
            if(i + 1 < s3.size() && s3[i + 1] == '0') i++;
            else if(i + 2 < s3.size() && s3[i + 2] == '0') i += 2;
            else ok = false;
        }
    }
    if(ok) 
    {
        // cerr << "s3, works" << nl; 
        cout << "YES" << nl; return;
    }

    cout << "NO" << nl;

}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "tc - " << tt << " : ";
        solve();
    }

    return 0;
}
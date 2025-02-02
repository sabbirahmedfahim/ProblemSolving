#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Lesson :
string x = "2", y = "11"
x is greater is than y
To handle this, use stoi(x), stoi(y)
*/
void solve()
{
    int n; cin >> n; vector<string> a(n); for(auto &e : a) cin >> e;

    vector<string> ans; // what if the value has 2-digits? [worked on it__ ]

    // first index
    // if(a.front() <= a.back()) // :3
    if(a[0].front() <= a[0].back()) 
    {
        string x, y; x.push_back(a[0].front()), y.push_back(a[0].back());
        ans.push_back(x); ans.push_back(y);
    }   
    else ans.push_back(a[0]);

    // general case
    bool isMatch = true;
    for (int i = 1; i < n && isMatch; i++)
    {
        if(stoi(ans.back()) > stoi(a[i])) 
        {
            // cout << ans.back() << " " << a[i] << nl; 
            isMatch = false;
        }
        else
        {
            string x, y; x.push_back(a[i].front()), y.push_back(a[i].back());
            if(stoi(ans.back()) <= stoi(x) && stoi(x) <= stoi(y)) // x and y could be same index, it will not buffer i guess
            {
                ans.push_back(x); ans.push_back(y);
            }
            else ans.push_back(a[i]);
        }
    }

    // output
    for (int i = 1; i < n && isMatch; i++)
    {
        if(stoi(ans[i-1]) > stoi(ans[i])) isMatch = false;
    }
    
    // print(ans);
    if(!isMatch) cout << "NO" << nl;
    else 
    {
        // if(is_sorted(all(ans))) cout << "YES" << nl; // is will not work for string :)
        // else cout << "NO" << nl;

        cout << "YES" << nl;
    } 
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s; 

    // if(s.front() == s.back()) // edge case
    // {
    //     cout << "NO" << nl; return;
    // }

    // there will be 8 different combination [currently 6]

    vector<char> v;

    for (int mask = 0; mask < (1<<3); mask++) // 8 opretation fixed
    {
        v.clear();

        // let, a=0, b=1, c=2
        bool a = true, b = true, c = true;
        for (int i = 0; i < 3; i++)
        {
            // if((mask >> i) & 1) cout << 1 << " ";
            // else cout << 0 << " ";

            if(i == 0 && ((mask >> i) & 1)) a = false;
            if(i == 1 && ((mask >> i) & 1)) b = false;
            if(i == 2 && ((mask >> i) & 1)) c = false;
        }
        
        // cout << " -> ";

        for (int j = 0; j < s.size(); j++) // we can directly use stack here to adjust TLE
        {
            if(s[j] == 'A' && a) v.push_back('(');
            else if(s[j] == 'A') v.push_back(')');
            else if(s[j] == 'B' && b) v.push_back('(');
            else if(s[j] == 'B') v.push_back(')');
            else if(s[j] == 'C' && c) v.push_back('(');
            else if(s[j] == 'C') v.push_back(')');
         }

        // print(v);
        if(a == b && b == c) continue; // 8 ta op theke 2ta reduce korlam

        stack<char> st;
        for(auto data : v)
        {
            if(st.empty()) st.push(data);
            else if(st.top() != data && data == ')') st.pop();
            else st.push(data);
        }
        if(st.empty())
        {
            cout << "YES" << nl; return;
        }
        // cout << nl;
    }
    // cout << nl << nl;

    // print(v);
    cout << "NO" << nl;

}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }
    

    return 0;
}
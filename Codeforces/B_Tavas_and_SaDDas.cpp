#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // int n; cin >> n;
    string s; cin >> s; 

    int cnt = 0;
    set<string> st;
    for (int mask = 0; mask < (1<<10); mask++)
    {
        string tmp;
        for (int k = 0; k < s.size(); k++)
        {
            // if((mask >> k) & 1) cout << 1 << " ";
            // else cout << 0 << " ";
            if((mask >> k) & 1) tmp += '7';
            else tmp += '4';
        }
        if(!st.count(tmp) && tmp <= s) 
        {
            st.insert(tmp);
            if(tmp <= s) cnt++;
            // cout << tmp << " ";
        }
    }

    // print(st);

    int extra = 0;
    for (int i = 1; i < s.size(); i++)
    {
        extra += pow(2, i);
    }
    
    cout << cnt + extra << nl;
    
    return 0;
}
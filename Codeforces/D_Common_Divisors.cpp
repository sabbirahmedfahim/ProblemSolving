#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s, ss; cin >> s >> ss;
    if(s.size() > ss.size()) swap(s, ss); // s <= ss

    int idx = 0;
    for (int i = 0; i < ss.size(); i++, idx++)
    {
        if(idx == s.size()) idx = 0;

        if(s[idx] != ss[i])
        {
            cout << 0 << nl; return 0;
        }
    }
    
    
    set<int> divs;
    for (int i = 1; i <= s.size(); i++)
    {
        if(s.size() % i == 0 && ss.size() % i == 0) divs.insert(i);
    }
    
    // print(divs);
    
    int cnt = 0;
    for(auto e : divs)
    {
        idx = 0;
        bool ok = true;
        for (int i = 0; i < ss.size(); i++, idx++)
        {
            if(idx == e) idx = 0;

            if(s[idx] != ss[i]) ok = false;
        }
        
        if(ok) cnt++;
    }

    cout << cnt << nl;

    return 0;
}
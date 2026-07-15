#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
set<string> st;
void fun(string s, int idx, string x)
{
    if(idx == s.size()) return;

    fun(s, idx + 1, x);
    x.push_back(s[idx]); st.insert(x);
    fun(s, idx + 1, x);
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s, x; cin >> s;

    fun(s, 0, x);
    // print(st);

    int ans = s.size() + 1;

    for(auto e : st)
    {
        if(e.front() == '0') continue;
        
        int N = stoll(e);
        int NN = sqrt(N);
        if(NN * NN == N) 
        {
            ans = min(ans, (int)s.size() - (int) e.size());
        }
    }

    if(ans == s.size() + 1) ans = -1;
    cout << ans << nl;

    return 0;
}
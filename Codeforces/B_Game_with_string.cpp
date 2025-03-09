#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;
    stack<char> st;

    int cnt_moves = 0;
    for(auto e : s)
    {
        if(st.empty()) st.push(e);
        else if(st.top() == e) 
        {
            st.pop(); cnt_moves++;
        }
        else st.push(e);
    }

    if(cnt_moves & 1) cout << "Yes" << nl;
    else cout << "No" << nl;

    return 0;
}
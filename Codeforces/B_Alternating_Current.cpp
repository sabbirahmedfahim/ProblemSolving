#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    stack<char> st;
    string s; cin >> s;
    while (!s.empty())
    {
        if(st.empty()) st.push(s.back());
        else if(st.top() == '+' && s.back() == '+' || 
        st.top() == '-' && s.back() == '-') st.pop();
        else st.push(s.back());
        s.pop_back();
    }
    cout << (st.empty()? "Yes" : "No") << nl;

    return 0;
}
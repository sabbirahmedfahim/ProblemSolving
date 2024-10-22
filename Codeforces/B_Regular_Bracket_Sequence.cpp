#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    string s; cin >> s;
    stack<char> st;
    int cnt = 0;
    for(auto ch : s)
    {
        if(ch == '(') st.push(ch);
        else if(!st.empty()) 
        {
            cnt += 2;
            st.pop();
        }
    }
    cout << cnt << nl;

    return 0;
}
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

    int n; cin>> n;
    stack <string> st;
    while (n--)
    {
       string s; cin >> s;
       st.push(s);
    }
    map<string, int> mp;
    while (!st.empty())
    {
        if(mp[st.top()] == 0) cout << st.top() << nl;
        mp[st.top()]++;
        st.pop();
    }
    
    

    return 0;
}
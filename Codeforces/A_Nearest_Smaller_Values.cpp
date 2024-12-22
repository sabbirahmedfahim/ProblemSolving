#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Strategy: We remove greater values from the stack than the current one because we already 
know the nearest smaller value is the current value if the previous ones are greater than that.
COOOOOOOL! :p
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    
    stack<pair<ll, int>> st;
    for (int i = 0; i < n; i++)
    {
        if(i == 0) 
        {
            cout << 0 << " "; st.push({v[i], i+1}); continue;
        }
        while (!st.empty())
        {
            if(st.top().first < v[i]) 
            {
                cout << st.top().second << " "; st.push({v[i], i+1}); break;
            }
            st.pop();
        }
        if(st.empty()) cout << 0 << " ";
        st.push({v[i], i+1});
    }

    return 0;
}
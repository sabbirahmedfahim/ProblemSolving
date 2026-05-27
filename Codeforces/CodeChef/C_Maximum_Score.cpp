#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    // vector<int> v(n); for(auto &data : v) cin >> data;
    stack<int> st;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        if(st.empty()) st.push(data);
        else if(data != st.top())
        {
            st.pop(); cnt++;
        }
        else st.push(data);
    }

    cout << cnt << nl;
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
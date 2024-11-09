#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    // input part
    int n, m; cin >> n >> m;
    string s; cin >> s;
    // vector<int> v(m);
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        int data; cin >> data; data--;
        st.insert(data);
    }
    string c; cin >> c;

    // operation part
    priority_queue<char, vector<char>, greater<char>> charStore;
    for(auto data : c) charStore.push(data);
    int sz = st.size();

    for(auto data : st)
    {
        // charStore er shob gula char ke main string 's' e link korbo so that s -> char update korte pari
        s[data] = charStore.top();
        charStore.pop();
    }

    cout << s << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
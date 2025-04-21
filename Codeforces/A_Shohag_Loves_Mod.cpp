#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    
    stack<int> st; st.push(2);
    for (int i = 2, j = 3; i <= n; i++, j++)
    {
        while (st.top()%(i-1) == j%i)
        {
            j++;
        }
        st.push(j);
    }
    
    vector<int> a;
    while (!st.empty())
    {
        // cout << st.top() << " ";
        a.push_back(st.top());
        st.pop();
    }
    reverse(all(a));
    print(a);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
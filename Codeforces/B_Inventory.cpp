#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n); 

    set<int> st;
    for (int i = 1; i <= n; i++) st.insert(i);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(st.count(a[i])) st.erase(a[i]);
        else a[i] = 0;
    }
    
    vector<int> rem;
    for(auto e : st) rem.push_back(e);
    for (int i = 0, j = 0; i < n; i++)
    {
        if(a[i] == 0) a[i] = rem[j], j++;
    }
    
    print(a);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}
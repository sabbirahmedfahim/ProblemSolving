#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int check_k(vector<int> a)
{
    set<int> st;
    for (int i = 1; i < a.size(); i++)
    {
        st.insert(a[i] + i);
        cout << a[i] + i << " ";
    }
    cout << nl;
    
    return st.size();
}
void solve()
{
    int n, k; cin >> n >> k;
    // int toReduce = n - k - 1;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    
    for (int i = 1, j = n - k + 1; i <= (n - k + 1)/2; i++, j--)
    {
        swap(a[i], a[j]);
    }



    // cout << check_k(a) << nl;


    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }

    cout << nl;
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
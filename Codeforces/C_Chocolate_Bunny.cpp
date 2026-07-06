// resolved from the editorial
#include <bits/stdc++.h>
// #define nl '\n'
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int ask(int x, int y)
{
    cout << "? " << x << " " << y << nl;
    int MOD; cin >> MOD;

    return MOD;
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1);

    set<int> st;
    for (int i = 1; i <= n; i++) st.insert(i);
    
    int currDukhiNumber = 1;
    for (int i = 2; i <= n; i++)
    {
        pair<int, int> jobab = {ask(i, currDukhiNumber), ask(currDukhiNumber, i)};

        if(jobab.first > jobab.second) 
        {
            a[i] = jobab.first;

            st.erase(a[i]);
        }
        else
        {
            a[currDukhiNumber] = jobab.second;
            st.erase(a[currDukhiNumber]);

            currDukhiNumber = i;
        }
    }
    
    cout << "! ";
    for (int i = 1; i <= n; i++)
    {
        if(a[i] == 0) a[i] = *st.begin();
        cout << a[i] << ' ';
    }
    cout << nl;
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}
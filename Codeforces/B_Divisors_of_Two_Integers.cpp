#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    multiset<int> ml;
    for(auto e : a) ml.insert(e);

    sort(all(a)); 

    set<int> st;
    for (int i = 1; i * i <= a.back(); i++)
    {
        if(a.back() % i == 0)
        {
            st.insert(i);
            st.insert(a.back() / i);
        }
    }
    st.insert(a.back());

    for(auto e : st)
    {
        auto it = ml.find(e);
        ml.erase(it);
    }

    cout << a.back() << ' ' << *prev(ml.end()) << nl;

    return 0;
}
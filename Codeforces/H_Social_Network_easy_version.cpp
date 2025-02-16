#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> v(n); for(auto &e : v) cin >> e;

    set<int> st; // handle unique elements
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        if(st.count(v[i])) continue;

        st.insert(v[i]);
        if(dq.size() == k) 
        {
            st.erase(dq.back()); 
            dq.pop_back();
        }

        dq.push_front(v[i]);
    }

    cout << dq.size() << nl;
    print(dq);

    return 0;
}
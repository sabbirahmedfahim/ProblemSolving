#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int MEX(vector<int> a, int need)
{
    set<int> st;
    for (int i = 0; i <= a.size(); i++)
    {
        st.insert(i);
    }
    
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        st.erase(a[i]);
 
        if(*st.begin() == need) cnt++;
    }
 
    return cnt;
}
void solve2()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<int> A = a; A.push_back(n);
    sort(all(A)); reverse(all(A));
    int who = A[k - 1];

    // cerr << MEX(a, who) << nl; return;

    int currBest = -1;
    int idx1 = -1, idx2 = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            vector<int> b = a;
            swap(b[i], b[j]);
            int data = MEX(b, who);

            if(data > currBest)
            {
                currBest = data;
                idx1 = i + 1, idx2 = j + 1;
            }
        }
    }
    
    if(currBest == -1)
    {
        cout << -1 << nl; return;
    }

    int normalArr = MEX(a, who);

    if(currBest > normalArr) cout << idx1 << " " << idx2 << nl;
    else cout << -1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve2();
    }

    return 0;
}
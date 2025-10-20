// used test case
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(auto &e : a) cin >> e;

  set<int> st;
  deque<int> stayNLeave, res;
  for(auto e : a) 
  {
    if(!st.count(e) && e != a.back()) stayNLeave.push_back(e);
    st.insert(e);
  }
  stayNLeave.push_back(a.back());

  for (int i = 1; i <= n && k; i++)
  {
    if(!st.count(i) && i != a.back()) 
    {
      res.push_back(i); stayNLeave.push_back(i); k--;
    }
  }
  // stayNLeave.push_back(a.back());
  // print(stayNLeave);

  for (int i = 0; i < k; i++)
  {
    res.push_back(stayNLeave.front());

    int tmp = stayNLeave.front(); stayNLeave.pop_front(); stayNLeave.push_back(tmp);
  }
  
  print(res);
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
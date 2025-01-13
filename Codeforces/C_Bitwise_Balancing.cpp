// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
truth table:
b c d -> a
0 0 0 -> 0
0 0 1 -> 1
0 1 0 -> 0
0 1 1 -> x
1 0 0 -> x
1 0 1 -> 0
1 1 0 -> 1
1 1 1 -> 0
*/
void solve()
{
   ll b, c, d; cin >> b >> c >> d;

   map<tuple<int, int, int>, int> mp;
   mp[{0, 0, 0}] = 0;
   mp[{0, 0, 1}] = 1;
   mp[{0, 1, 0}] = 0;
   mp[{0, 1, 1}] = -1; // means cross, not possible
   mp[{1, 0, 0}] = -1;
   mp[{1, 0, 1}] = 0;
   mp[{1, 1, 0}] = 1;
   mp[{1, 1, 1}] = 0;

   ll res = 0;
   for (int i = 60; i >= 0; i--)
   {
      ll x = (((1ll << i) & b) && 1); 
      ll y = (((1ll << i) & c) && 1);
      ll z =(((1ll << i) & d) && 1);
      ll ans = mp[{x,y,z}];
      if(ans == -1)
      {
         cout << -1 << nl; return;
      }
 
   res += (ans*(1ll << i) );
   }
   cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
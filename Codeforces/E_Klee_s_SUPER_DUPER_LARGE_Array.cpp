// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
 
ll getSum(ll n, ll k)
{
   ll n_k = n + k - 1, kk = k - 1;
   ll sum = ((n_k * (n_k + 1ll)) / 2ll), subsVal = (kk * (kk + 1)) / 2ll;
   return (sum - subsVal);
}
 
void solve()
{
   ll n, k;
   cin >> n >> k;
   ll midSum = (getSum(n, k) / 2LL);
 
   auto ok = [&](ll mid) 
   {
      ll currSum = getSum(mid - 1, k);
      return currSum <= midSum;
   };
 
   ll l = 1, r = ((k + n - 1) - (k - 1)), mid, ans = 0;
   while (l <= r) 
   {
      mid = l + (r - l) / 2LL;
      if (ok(mid)) 
      {
        ans = mid - 1;
        l = mid + 1;
      }
      else r = mid - 1;
   }
 
//    cout << ans << '\n';
   ll tot_sum = getSum(n, k);
   ll h1 = getSum(ans, k), h2 = tot_sum - h1;
   ll res = abs(h1-h2);

   // edge case
   if((ans+1) <= n)
   {
      ll h3 = abs(getSum(n, k) - getSum(ans+1, k));
      res = min(res, abs(getSum(ans+1, k) - h3));
   }

   cout << res << nl;
}
 
int main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL);
 
   int t; cin >> t;
   for (int tt = 1; tt <= t; tt++)
   {
      // cout << "TEST CASE-" << tt << nl;
      solve();
   }
 
   return 0;
}
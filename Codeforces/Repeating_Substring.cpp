// LLM
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
struct StringHash
{
vector<ll> bases = {131, 137, 277, 257};
vector<ll> mods = {127657753, 987654319, 1000000007, 972663749};
 ll base1, base2, mod1, mod2;
vector<pair<ll,ll>> prefixHash, suffixHash, basePower;
StringHash(const string &s)
{
int n = s.size();
 prefixHash.resize(n); basePower.resize(n); suffixHash.resize(n);
 base1 = bases[rand()%4], base2 = bases[rand()%4];
while(base2 == base1) base2 = bases[rand()%4];
 mod1 = mods[rand()%4], mod2 = mods[rand()%4];
while(mod2 == mod1) mod2 = mods[rand()%4];
 buildPrefixHash(s);
}
void buildPrefixHash(const string &s)
{
 prefixHash[0] = {s[0] , s[0]};
 basePower[0] = {1,1};
for(int i=1;i<s.size();i++)
{
 prefixHash[i].first = ((prefixHash[i-1].first * base1)+s[i]) % mod1;
 prefixHash[i].second = ((prefixHash[i-1].second * base2)+s[i]) % mod2;
 basePower[i] = {(basePower[i-1].first * base1) % mod1 , (basePower[i-1].second * base2) % mod2 };
}
}
 pair<ll,ll> getPrefixHash(int l, int r)
{
if(l==0) return prefixHash[r];
 ll a = (((prefixHash[r].first - (prefixHash[l-1].first * basePower[r-l+1].first)) % mod1) + mod1) % mod1;
 ll b = (((prefixHash[r].second - (prefixHash[l-1].second * basePower[r-l+1].second)) % mod2) + mod2) % mod2;
return {a,b};
}
};
void solve()
{
 string s; cin >> s;
StringHash hash(s);
int lo = 1, hi = s.size() - 1;
int finalL = -1, finalR = -1;
auto canWePlace = [&](int mid)
{
set<pair<ll, ll>> st;
for (int l = 0; l + mid - 1 < s.size(); l++)
{
int r = l + mid - 1;
 pair<ll, ll> curr_hash = hash.getPrefixHash(l, r);
if(st.count(curr_hash))
{
 finalL = l, finalR = r;
return true;
}
 st.insert(curr_hash);
}
return false;
};
while (lo <= hi)
{
int mid = lo + (hi - lo)/2;
if(canWePlace(mid))
{
 lo = mid + 1;
}
else hi = mid - 1;
}
if(finalL == -1) cout << -1 << nl;
else
{
 string res;
for (int i = finalL; i <= finalR; i++) res += s[i];
 cout << res << nl;
}
}
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(NULL);
 srand(time(0));
 solve();
}
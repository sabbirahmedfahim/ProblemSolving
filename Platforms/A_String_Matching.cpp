#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

#define DOUBLE 1
struct StringHash{
    vector<ll> bases={131,137,277,257}, mods={127657753,987654319,1000000007,972663749};
#if DOUBLE
    ll base1,base2,mod1,mod2; vector<pair<ll,ll>> prefixHash,suffixHash,basePower;
#else
    ll base,mod; vector<ll> prefixHash,suffixHash,basePower;
#endif
    StringHash(const string &s){
        int n=s.size();
#if DOUBLE
        prefixHash.resize(n); basePower.resize(n); suffixHash.resize(n);
        base1=bases[rand()%4];
        base2=bases[rand()%4]; while(base2==base1)base2=bases[rand()%4];
        mod1=mods[rand()%4];
        mod2=mods[rand()%4]; while(mod2==mod1)mod2=mods[rand()%4];
        buildPrefixHash(s); // O(n)
#else
        prefixHash.resize(n); basePower.resize(n); suffixHash.resize(n);
        base=bases[rand()%4];
        mod=mods[rand()%4];
        buildPrefixHash(s);
#endif
    }
#if DOUBLE
    void buildPrefixHash(const string &s){
        prefixHash[0]={s[0],s[0]};   
        basePower[0]={1,1};
        for(int i=1;i<s.size();i++){
prefixHash[i].first=(prefixHash[i-1].first*base1+s[i])%mod1;
prefixHash[i].second=(prefixHash[i-1].second*base2+s[i])%mod2;
basePower[i]={(basePower[i-1].first*base1)%mod1,(basePower[i-1].second*base2)%mod2};
        }
    }
    void buildSuffixHash(const string &s){
        int n=s.size(); suffixHash[n-1]={s[n-1],s[n-1]};
        for(int i=n-2;i>=0;i--){
suffixHash[i].first=(suffixHash[i+1].first*base1+s[i])%mod1;
suffixHash[i].second=(suffixHash[i+1].second*base2+s[i])%mod2;
        }
    }
    pair<ll,ll> quickHash(const string &s){
        pair<ll,ll> H={s[0],s[0]}; for(int i=1;i<s.size();i++) H={ (H.first*base1+s[i])%mod1, (H.second*base2+s[i])%mod2 }; return H;
    }
    pair<ll,ll> getPrefixHash(int l,int r){
        if(l==0)return prefixHash[r];
ll a = (((prefixHash[r].first-prefixHash[l-1].first *basePower[r-l+1].first)%mod1)+mod1)%mod1;
ll b = (((prefixHash[r].second-prefixHash[l-1]. second*basePower[r-l+1].second)%mod2)+mod2)%mod2;
        return {a,b};
    }
pair<ll,ll> getSuffixHash(int l,int r){
        int n=suffixHash.size(); if(r==n-1)return suffixHash[l];
ll a = (((suffixHash[l].first-suffixHash[r+1].first *basePower[r-l+1].first)%mod1)+mod1)%mod1;
ll b = (((suffixHash[l].second-suffixHash[r+1]. second*basePower[r-l+1].second)%mod2)+mod2)%mod2;
        return {a,b};
    }
    pair<ll,ll> concatSubstr(int l1,int r1,int l2,int r2){
auto L = getPrefixHash(l1,r1), R=getPrefixHash(l2,r2);
        return {(L.first+R.first*basePower[r2-l2+1].first)%mod1,(L.second+R.second*basePower[r2-l2+1].second)%mod2};
    }
    pair<ll,ll> concatHash(pair<ll,ll> L,pair<ll,ll> R,int lenR){
        return {(L.first*basePower[lenR].first+R.first)%mod1,(L.second*basePower[lenR].second+R.second)%mod2};
    }
    void appendChar(char c){
        ll nf=(prefixHash.back().first*base1+c)%mod1,nS=(prefixHash.back().second*base2+c)%mod2;
        prefixHash.push_back({nf,nS});
basePower.push_back({(basePower.back().first*base1)%mod1,(basePower.back().second*base2)%mod2});
    }
#else
    void buildPrefixHash(const string &s){ prefixHash[0]=s[0]; basePower[0]=1;
for(int i=1;i<s.size();i++){ prefixHash[i]=(prefixHash[i-1]*base+s[i])%mod; basePower[i]=(basePower[i-1]*base)%mod; } }
void buildSuffixHash(const string &s){ int n=s.size(); suffixHash[n-1]=s[n-1]; 
for(int i=n-2;i>=0;i--) suffixHash[i]=(suffixHash[i+1]*base+s[i])%mod; }
    ll quickHash(const string &s){ ll H=s[0]; for(int i=1;i<s.size();i++) H=(H*base+s[i])%mod; return H; }
    ll getPrefixHash(int l,int r){ if(l==0)return prefixHash[r]; return (((prefixHash[r]-prefixHash[l-1]*basePower[r-l+1])%mod)+mod)%mod; }
    ll getSuffixHash(int l,int r){ int n=suffixHash.size(); if(r==n-1)return suffixHash[l]; return (((suffixHash[l]-suffixHash[r+1]*basePower[r-l+1])%mod)+mod)%mod; }
    ll concatSubstr(int l1,int r1,int l2,int r2){ return (getPrefixHash(l1,r1)+getPrefixHash(l2,r2)*basePower[r2-l2+1])%mod; }
    ll concatHash(ll L,ll R,int lenR){ return (L*basePower[lenR]+R)%mod; }
    void appendChar(char c){ ll v=(prefixHash.back()*base+c)%mod; prefixHash.push_back(v); basePower.push_back((basePower.back()*base)%mod); }
#endif
};
void solve(){ 
    string s, ss; cin >> s >> ss;
 
    StringHash hash(s);
    pair<ll, ll> qHash = hash.quickHash(ss);
 
    int cnt = 0;
    for (int l = 0, r = 0; r < s.size(); r++)
    {
        if(r - l + 1 == ss.size())
        {
            pair<ll,ll> currHash = hash.getPrefixHash(l, r);
            if(currHash == qHash) cnt++;
 
            l++;
        }
    }
 
    cout << cnt << nl;
}
int main(){
    srand(time(0)); // call once under main 
    solve();}

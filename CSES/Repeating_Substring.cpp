#include <bits/stdc++.h>
#define nl '\n'
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
 
struct StringHash
{
    /*
        in main() write the following line for better randomness 
        srand(time(0));
    */
    vector<int> bases = {131, 137, 277, 257};
    vector<int> mods  = {127657753, 987654319, 1000000007, 972663749};
    int base1, base2, mod1, mod2;
    vector<pair<int,int>> prefixHash, suffixHash, basePower;
 
    StringHash(const string &s)
    {
        int n = s.size();
        prefixHash.resize(n); basePower.resize(n); suffixHash.resize(n);
        base1 = bases[rand()%4], base2 = bases[rand()%4];
        while(base2 == base1) base2 = bases[rand()%4];
        mod1 = mods[rand()%4], mod2 = mods[rand()%4];
        while(mod2 == mod1) mod2 = mods[rand()%4];
        
        buildPrefixHash(s); // O(n)
        // buildSuffixHash(s); // *** Uncomment when you need to build SuffixHash
    }
    
    void buildPrefixHash(const string &s) // O(n)
    {
        prefixHash[0] = {s[0] , s[0]};
        basePower[0] = {1,1};
        for(int i=1;i<s.size();i++)
        {
            prefixHash[i].first  = (int)((1LL * prefixHash[i-1].first  * base1 + s[i]) % mod1);
            prefixHash[i].second = (int)((1LL * prefixHash[i-1].second * base2 + s[i]) % mod2);
            basePower[i] = {
                ((1LL * basePower[i-1].first  * base1) % mod1),
                ((1LL * basePower[i-1].second * base2) % mod2)
            };
        }
    }
    
    pair<int,int> getPrefixHash(int l, int r) // O(1)
    {
        if(l==0) return prefixHash[r];
        int a = ((((1LL * prefixHash[r].first  - 1LL * prefixHash[l-1].first  * basePower[r-l+1].first ) % mod1) + mod1) % mod1);
        int b = ((((1LL * prefixHash[r].second - 1LL * prefixHash[l-1].second * basePower[r-l+1].second) % mod2) + mod2) % mod2);
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
        set<pair<int,int>> st;
        for (int l = 0, r = 0; r < (int)s.size(); r++)
        {
            if(r - l + 1 == mid)
            {
                pair<int,int> curr_hash = hash.getPrefixHash(l, r);
                if(st.count(curr_hash))
                {
                    finalL = l, finalR = r;
                    return true;
                }
 
                st.insert(curr_hash);
                l++;
            }
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
 
    srand(time(0)); // call once under main function
 
    solve();
}
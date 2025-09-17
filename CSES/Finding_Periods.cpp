#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

/*
    Switch:
    #define DOUBLE 1   -> Double Hashing (default, safer)
    #define DOUBLE 0   -> Single Hashing (lighter, faster)
*/
#define DOUBLE 0

struct StringHash
{
    /*
        in main() write the following line for better randomness 
        srand(time(0));
    */
    vector<ll> bases = {131, 137, 277, 257};
    vector<ll> mods = {127657753, 987654319, 1000000007, 972663749};

#if DOUBLE
    ll base1, base2, mod1, mod2;
    vector<pair<ll,ll>> prefixHash, suffixHash, basePower;
#else
    ll base, mod;
    vector<ll> prefixHash, suffixHash, basePower;
#endif

    StringHash(const string &s)
    {
        int n = s.size();
#if DOUBLE
        prefixHash.resize(n); basePower.resize(n); suffixHash.resize(n);
        base1 = bases[rand()%4], base2 = bases[rand()%4];
        while(base2 == base1) base2 = bases[rand()%4];
        mod1 = mods[rand()%4], mod2 = mods[rand()%4];
        while(mod2 == mod1) mod2 = mods[rand()%4];
        buildPrefixHash(s); // O(n)
        // buildSuffixHash(s); // *** Uncomment when you need suffix hash
#else
        prefixHash.resize(n); basePower.resize(n); suffixHash.resize(n);
        base = bases[rand()%4], mod = mods[rand()%4];
        buildPrefixHash(s); // O(n)
        // buildSuffixHash(s);
#endif
    }

#if DOUBLE
    void buildPrefixHash(const string &s) // O(n)
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

    void buildSuffixHash(const string &s) // O(n) if called
    {
        int n = s.size();
        suffixHash[n-1] = {s[n-1], s[n-1]};
        for(int i=n-2;i>=0;i--)
        {
            suffixHash[i].first = ((suffixHash[i+1].first * base1) + s[i]) % mod1;
            suffixHash[i].second = ((suffixHash[i+1].second * base2) + s[i]) % mod2;
        }
    }

    pair<ll,ll> quickHash(const string &s) // O(n)
    {
        pair<ll,ll> Hash = {s[0],s[0]};
        for(int i=1;i<s.size();i++)
        {
            Hash.first = ((Hash.first*base1) + s[i] ) % mod1;
            Hash.second = ((Hash.second*base2) + s[i]) % mod2;
        }
        return Hash;
    }
    
    pair<ll,ll> getPrefixHash(int l, int r) // O(1)
    {
        if(l==0) return prefixHash[r];
        ll a = (((prefixHash[r].first - (prefixHash[l-1].first * basePower[r-l+1].first)) % mod1) + mod1) % mod1;
        ll b = (((prefixHash[r].second - (prefixHash[l-1].second * basePower[r-l+1].second)) % mod2) + mod2) % mod2;
        return {a,b};
    }

    pair<ll,ll> getSuffixHash(int l, int r)  // O(1)
    {
        int n = suffixHash.size();
        if(r == n-1) return suffixHash[l];
        ll a = (((suffixHash[l].first - (suffixHash[r+1].first * basePower[r-l+1].first)) % mod1) + mod1) % mod1;
        ll b = (((suffixHash[l].second - (suffixHash[r+1].second * basePower[r-l+1].second)) % mod2) + mod2) % mod2;
        return {a,b};
    }

    pair<ll,ll> concatSubstr(int l1,int r1,int l2,int r2) // O(1)
    {
        pair<ll,ll> hashLeft = getPrefixHash(l1,r1);
        pair<ll,ll> hashRight = getPrefixHash(l2,r2);
        return {(hashLeft.first +  hashRight.first * basePower[r2-l2+1].first ) % mod1 , 
                (hashLeft.second + hashRight.second * basePower[r2-l2+1].second) % mod2};
    }

    pair<ll,ll> concatHash(const pair<ll,ll>& left, const pair<ll,ll>& right, int lenRight) // O(1)
    {
        return {(left.first * basePower[lenRight].first + right.first) % mod1, 
                (left.second * basePower[lenRight].second + right.second) % mod2 };
    }

    void appendChar(char c) // O(1)
    {
        ll newFirst = (prefixHash.back().first * base1 + c) % mod1;
        ll newSecond = (prefixHash.back().second * base2 + c) % mod2;
        prefixHash.push_back({newFirst,newSecond});
        
        ll powFirst = (basePower.back().first * base1) % mod1;
        ll powSecond = (basePower.back().second * base2) % mod2;
        basePower.push_back({powFirst,powSecond});
    }
#else
    void buildPrefixHash(const string &s) // O(n)
    {
        prefixHash[0] = s[0];
        basePower[0] = 1;
        for(int i=1;i<s.size();i++)
        {
            prefixHash[i] = ((prefixHash[i-1] * base) + s[i]) % mod;
            basePower[i] = (basePower[i-1] * base) % mod;
        }
    }

    void buildSuffixHash(const string &s) // O(n) if called
    {
        int n = s.size();
        suffixHash[n-1] = s[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffixHash[i] = ((suffixHash[i+1] * base) + s[i]) % mod;
        }
    }

    ll quickHash(const string &s) // O(n)
    {
        ll Hash = s[0];
        for(int i=1;i<s.size();i++)
        {
            Hash = ((Hash*base) + s[i] ) % mod;
        }
        return Hash;
    }
    
    ll getPrefixHash(int l, int r) // O(1)
    {
        if(l==0) return prefixHash[r];
        return (((prefixHash[r] - (prefixHash[l-1] * basePower[r-l+1])) % mod) + mod) % mod;
    }

    ll getSuffixHash(int l, int r)  // O(1)
    {
        int n = suffixHash.size();
        if(r == n-1) return suffixHash[l];
        return (((suffixHash[l] - (suffixHash[r+1] * basePower[r-l+1])) % mod) + mod) % mod;
    }

    ll concatSubstr(int l1,int r1,int l2,int r2) // O(1)
    {
        ll hashLeft = getPrefixHash(l1,r1);
        ll hashRight = getPrefixHash(l2,r2);
        return (hashLeft +  hashRight * basePower[r2-l2+1]) % mod;
    }

    ll concatHash(ll left, ll right, int lenRight) // O(1)
    {
        return (left * basePower[lenRight] + right) % mod;
    }

    void appendChar(char c) // O(1)
    {
        ll newVal = (prefixHash.back() * base + c) % mod;
        prefixHash.push_back(newVal);
        
        ll powVal = (basePower.back() * base) % mod;
        basePower.push_back(powVal);
    }
#endif
};
 
void solve()
{
    string s; cin >> s;
 
    StringHash hash(s);
 
    // map<int, ll> freq;
    vector<int> freq(1E6 + 5, 0);
 
    for (int i = 0; i < s.size(); i++)
    {
        // cerr << i + 1 << " : " ;
        for (int j = 0; j < s.size(); j += (i + 1))
        {
            // cerr << j << " ";
 
            if((j + i) < s.size()) 
            {
                ll currHash = hash.getPrefixHash(j, j + i);

                if(freq[i + 1] == 0) freq[i + 1] = currHash;
                else if(freq[i + 1] == currHash); // saves potential 'period'
                else freq[i + 1] = -1;
    
                // if(!freq.count(i + 1)) freq[i + 1] = currHash;
                // else if(freq[i + 1] == currHash); // saves potential 'period'
                // else freq[i + 1] = -1;
            }
            else 
            {
                // cerr << nl << "###" << i << " : " << j << nl;
 
                ll currIncompleteHash = hash.getPrefixHash(j, s.size() - 1);
                int l = j, r = s.size() - 1;
                ll prevHash = hash.getPrefixHash(0, r - l);
 
                if(currIncompleteHash != prevHash) freq[i + 1] = -1;
            }
        }
        // cerr << nl;
    }
 
    vector<int> res;
    // for(auto [x, y] : freq)
    // {
    //     // cout << x << " --> " << y << nl;
    //     if(y == -1) continue;
    //     else res.push_back(x);
    // }
 
    for (int i = 0; i <= 1E6; i++)
    {
        if(freq[i] == -1 || freq[i] == 0) continue;
        res.push_back(i);
    }
    
    print(res);
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    srand(time(0)); // call once under main function
 
    solve();
}
 
/*
* Notes:
* - buildPrefixHash() is auto-called in the constructor; buildSuffixHash() must be 
*   uncommented when a suffix hash is needed.
* - Random bases/mods are fine for single hashing, but avoid randomness for 
*   consistent multi-hash comparisons.
* - appendChar() updates the hash in O(1) when extending the string; for substrings, O(n).
* - concatSubstr() works well even if multiple hashes are declared.
 
# Problem: Length of Longest Palindromic Substring
# Approach: 
  - Precompute prefix & suffix double hashes. 
  - For each center (odd/even), binary search the maximum radius where prefix-hash 
    matches suffix-hash.
  - Track the maximum length. Complexity: O(n log n).
*/
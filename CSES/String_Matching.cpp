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
        prefixHash[0] = {s[0], s[0]};
        basePower[0] = {1,1};
        for(int i=1;i<(int)s.size();i++)
        {
            prefixHash[i].first  = (int)((1LL * prefixHash[i-1].first  * base1 + s[i]) % mod1);
            prefixHash[i].second = (int)((1LL * prefixHash[i-1].second * base2 + s[i]) % mod2);
            basePower[i] = {
                (int)((1LL * basePower[i-1].first  * base1) % mod1),
                (int)((1LL * basePower[i-1].second * base2) % mod2)
            };
        }
    }

    void buildSuffixHash(const string &s) // O(n) if called
    {
        int n = s.size();
        suffixHash[n-1] = {s[n-1], s[n-1]};
        for(int i=n-2;i>=0;i--)
        {
            suffixHash[i].first  = (int)((1LL * suffixHash[i+1].first  * base1 + s[i]) % mod1);
            suffixHash[i].second = (int)((1LL * suffixHash[i+1].second * base2 + s[i]) % mod2);
        }
    }

    pair<int,int> quickHash(const string &s) // O(n)
    {
        pair<int,int> Hash = {s[0], s[0]};
        for(int i=1;i<(int)s.size();i++)
        {
            Hash.first  = (int)((1LL * Hash.first  * base1 + s[i]) % mod1);
            Hash.second = (int)((1LL * Hash.second * base2 + s[i]) % mod2);
        }
        return Hash;
    }
    
    pair<int,int> getPrefixHash(int l, int r) // O(1)
    {
        if(l==0) return prefixHash[r];
        int a = (int)((((1LL * prefixHash[r].first  - 1LL * prefixHash[l-1].first  * basePower[r-l+1].first ) % mod1) + mod1) % mod1);
        int b = (int)((((1LL * prefixHash[r].second - 1LL * prefixHash[l-1].second * basePower[r-l+1].second) % mod2) + mod2) % mod2);
        return {a,b};
    }

    pair<int,int> getSuffixHash(int l, int r)  // O(1)
    {
        int n = suffixHash.size();
        if(r == n-1) return suffixHash[l];
        int a = (int)((((1LL * suffixHash[l].first  - 1LL * suffixHash[r+1].first  * basePower[r-l+1].first ) % mod1) + mod1) % mod1);
        int b = (int)((((1LL * suffixHash[l].second - 1LL * suffixHash[r+1].second * basePower[r-l+1].second) % mod2) + mod2) % mod2);
        return {a,b};
    }

    pair<int,int> concatSubstr(int l1,int r1,int l2,int r2) // O(1)
    {
        pair<int,int> hashLeft = getPrefixHash(l1,r1);
        pair<int,int> hashRight = getPrefixHash(l2,r2);
        return {
            (int)((hashLeft.first  + 1LL * hashRight.first  * basePower[r2-l2+1].first ) % mod1),
            (int)((hashLeft.second + 1LL * hashRight.second * basePower[r2-l2+1].second) % mod2)
        };
    }

    pair<int,int> concatHash(const pair<int,int>& left, const pair<int,int>& right, int lenRight) // O(1)
    {
        return {
            (int)((1LL * left.first  * basePower[lenRight].first  + right.first)  % mod1),
            (int)((1LL * left.second * basePower[lenRight].second + right.second) % mod2)
        };
    }

    void appendChar(char c) // O(1)
    {
        int newFirst  = (int)((1LL * prefixHash.back().first  * base1 + c) % mod1);
        int newSecond = (int)((1LL * prefixHash.back().second * base2 + c) % mod2);
        prefixHash.push_back({newFirst,newSecond});
        
        int powFirst  = (int)((1LL * basePower.back().first  * base1) % mod1);
        int powSecond = (int)((1LL * basePower.back().second * base2) % mod2);
        basePower.push_back({powFirst,powSecond});
    }
};

void solve()
{
    string s, ss; cin >> s >> ss;

    StringHash hash(s);
    pair<int, int> qHash = hash.quickHash(ss);

    int cnt = 0;
    for (int l = 0, r = 0; r < s.size(); r++)
    {
        if(r - l + 1 == ss.size())
        {
            pair<int, int> currHash = hash.getPrefixHash(l, r);
            if(currHash == qHash) cnt++;

            l++;
        }
    }

    cout << cnt << nl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    srand(time(0)); // call once under main function

    solve();
}

/*
Notes:
- buildPrefixHash() is auto-called in the constructor; buildSuffixHash() must be 
  uncommented when a suffix hash is needed.
- Random bases/mods are fine for single hashing, but avoid randomness for 
  consistent multi-hash comparisons.
- appendChar() updates the hash in O(1) when extending the string; for substrings, O(n).
- concatSubstr() works well even if multiple hashes are declared.

Problem: Length of Longest Palindromic Substring
Approach: 
  - Precompute prefix & suffix double hashes. 
  - For each center (odd/even), binary search the maximum radius where prefix-hash 
    matches suffix-hash.
  - Track the maximum length. Complexity: O(n log n).
*/
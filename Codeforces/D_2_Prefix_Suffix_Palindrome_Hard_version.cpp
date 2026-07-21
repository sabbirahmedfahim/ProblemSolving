#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

struct StringHash
{
    /*
        in main() write the following line for better randomness 
        srand(time(0));
    */
    // vector<ll> bases = {131, 137, 277, 257};
    // vector<ll> mods  = {127657753, 987654319, 1000000007, 972663749};
    ll base, mod;
    vector<ll> prefixHash, suffixHash, basePower;

    StringHash(const string &s)
    {
        int n = s.size();
        prefixHash.resize(n); basePower.resize(n); suffixHash.resize(n);
        // base = bases[rand()%4];
        // mod  = mods[rand()%4];
        base = 277, mod = 972663749;
        
        buildPrefixHash(s); // O(n)
        buildSuffixHash(s); // *** Uncomment when you need to build SuffixHash
    }
    void buildPrefixHash(const string &s) // O(n)
    {
        prefixHash[0] = s[0];
        basePower[0] = 1;
        for(int i=1;i<s.size();i++)
        {
            prefixHash[i] = ((prefixHash[i-1] * base) + s[i]) % mod;
            basePower[i]  = (basePower[i-1] * base) % mod;
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
    ll getPrefixHash(int l, int r) // O(1)
    {
        if(l==0) return prefixHash[r];
        ll val = (prefixHash[r] - (prefixHash[l-1] * basePower[r-l+1]) % mod + mod) % mod;
        return val;
    }
    ll getSuffixHash(int l, int r)  // O(1)
    {
        int n = suffixHash.size();
        if(r == n-1) return suffixHash[l];
        ll val = (suffixHash[l] - (suffixHash[r+1] * basePower[r-l+1]) % mod + mod) % mod;
        return val;
    }
};
void solve()
{
    string s; cin >> s;
    deque<char> dq;
    for (auto e : s) dq.push_back(e);

    deque<char> addBothSide;
    while (dq.size() >= 2 && dq.front() == dq.back())
    {
        addBothSide.push_back(dq.front());
        dq.pop_front(); dq.pop_back();
    }

    if (dq.empty())
    {
        for (auto e : addBothSide) cout << e;
        reverse(all(addBothSide));
        for (auto e : addBothSide) cout << e;
        cout << nl;

        return;
    }

    s.clear();
    for (auto e : dq) s.push_back(e);
    // cout << s << nl;

    string leftValue = "", rightValue = "";

    StringHash hash1(s); 
    int leftIdx = -1;
    for (int i = 0; i < s.size(); i++) // abcde
    {
        int leftEAche = i, rightEAche = i + i;

        if(rightEAche < s.size() && hash1.getPrefixHash(0, leftEAche) == hash1.getSuffixHash(i, rightEAche)) leftIdx = rightEAche;
        if(rightEAche + 1 < s.size() && hash1.getPrefixHash(0, leftEAche) == hash1.getSuffixHash(i + 1, rightEAche + 1)) leftIdx = rightEAche + 1;
    }
    // cout << leftIdx << nl; return;
    for (int i = 0; i <= leftIdx; i++) leftValue += s[i]; // cout << leftValue << nl; return;

    reverse(all(s));
    StringHash hash2(s); 
    int rightIdx = -1;
    for (int i = 0; i < s.size(); i++) // abcde
    {
        int leftEAche = i, rightEAche = i + i;

        if(rightEAche < s.size() && hash2.getPrefixHash(0, leftEAche) == hash2.getSuffixHash(i, rightEAche)) rightIdx = rightEAche;
        if(rightEAche + 1 < s.size() && hash2.getPrefixHash(0, leftEAche) == hash2.getSuffixHash(i + 1, rightEAche + 1)) rightIdx = rightEAche + 1;
    }
    // cout << rightIdx << nl; return; 
    
    for (int i = 0; i <= rightIdx; i++) rightValue += s[i]; // cout << rightValue << nl; return;

    string pickGreaterMiddleValue;
    if (leftValue.size() >= rightValue.size()) pickGreaterMiddleValue = leftValue;
    else pickGreaterMiddleValue = rightValue;

    // cout << leftValue << " : " << rightValue << nl;
    for (auto e : addBothSide) cout << e;
    for (auto e : pickGreaterMiddleValue) cout << e;
    if (!addBothSide.empty()) reverse(all(addBothSide));
    for (auto e : addBothSide) cout << e;
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    srand(time(0));

    int t; cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}
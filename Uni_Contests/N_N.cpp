#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    map<string, string> mp;
    string s;
    while (getline(cin, s) && !s.empty())
    {
        istringstream ss(s);
        string a, b, word;
        while (ss >> word)
        {
            if(a.empty()) a = word;
            else b = word;
        }
        mp[b] = a;
    }
    
    string word; 
    while (cin >> word)
    {
        if(mp.count(word)) cout << mp[word] << nl;
        else cout << "eh" << nl;
    }
    

    return 0;
}
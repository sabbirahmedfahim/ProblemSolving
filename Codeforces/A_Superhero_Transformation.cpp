#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
bool isVowel(char ch) 
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main()
{
    iOS

    string s, t; cin >> s >> t;
    if(s.size() != t.size()) cout << "No" << nl;
    else 
    {
        bool isPossible = true;
        for (int i = 0; i < s.size(); i++)
        {
            if(isVowel(s[i]) && !isVowel(t[i]) || !isVowel(s[i]) && isVowel(t[i]))
            {
                isPossible = false; break;
            }
        }
        cout << ((isPossible)? "Yes" : "No" ) << nl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int cnt_vowels(string s, int n)
{
    if(n < 0) return 0;
    bool ok = (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' 
        || s[n] == 'u' || s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' 
        || s[n] == 'U');
    return ok + cnt_vowels(s, n-1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; string s; 
    getline(cin, s);
    // cout << s << nl;
    n = s.size();

    cout << cnt_vowels(s, n);

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool f(string s, int curr)
{
    if(curr >= s.size()/2) return true;
    if(s[curr] != s[s.size() - curr - 1]) return false;

    return (s, curr + 1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s = "sabbir";
    
    if(f(s, 0)) cout << "Palindrome" << nl;
    else cout << "Not Palindrome" << nl;

    cout << nl;

    s = "wow";
    if(f(s, 0)) cout << "Palindrome" << nl;
    else cout << "Not Palindrome" << nl;

    return 0;
}
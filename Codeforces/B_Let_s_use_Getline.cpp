#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; 
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '\\') break;
        cout << s[i];
    }
    

    return 0;
}
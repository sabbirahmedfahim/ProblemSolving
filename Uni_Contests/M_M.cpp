#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    string s; cin >> s;
    for (int i = 0, j = s.size()-1; i < s.size()/2; i++, j--)
    {
        if(s[i] != s[j])
        {
            cout << "NO" << nl; return 0;
        }
    }
    cout << "YES" << nl;

    return 0;
}
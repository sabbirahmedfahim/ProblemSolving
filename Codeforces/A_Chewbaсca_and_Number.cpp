#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s; 
    
    for (int i = 0; i < s.size(); i++)
    {
        if(i == 0 && s[i] == '9') continue;

        if((s[i] - '0') >= 5) 
        {
            int data = 9 - (s[i] - '0');
            s[i] = data + '0';
        }
    }
    
    cout << s << nl;

    return 0;
}
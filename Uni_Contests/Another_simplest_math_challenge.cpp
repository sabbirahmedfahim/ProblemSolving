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
    for (int i = s.size()-1; i >= 0;)
    {
        while (i >= 0 && s[i] == '9')
        {
            s[i] = '0';
            i--;
        }

        if(i == -1) 
        {
            cout << '1';
            for (int i = 0; i < s.size(); i++) cout << '0';
            cout << nl;
            return 0;
        }

        int x = (int) (s[i]); x++;
        s[i] = (char) x;
        break;
    }
    
    cout << s << nl;

    return 0;
}
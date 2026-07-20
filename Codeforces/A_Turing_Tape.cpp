#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; getline(cin, s);

    int prev = 0;

    for(int i = 0; i < s.size(); i++)
    {
        char ch = s[i]; int data = ch; 
        // cerr << data << nl;
        vector<int> bits(8);
        for (int i = 0; i < 8; i++)
        {
            if((data >> i) & 1) bits[i] = 1;
        }
        reverse(all(bits));
        int revData = 0;
        for (int i = 0; i < 8; i++)
        {
            if(bits[i] == 1) revData += (1 << i);
        }
        // cout << revData << nl;

        int ans = (prev - revData + 256) % 256;
        // cerr << prev << " - " << revData << " % " << 256 << nl;
        cout << ans << nl;

        prev = revData;
    }

    return 0;
}
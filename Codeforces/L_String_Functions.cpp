#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q;
    string s; cin >> s;

    while (q--)
    {
        string cmd; cin >> cmd;

        if(cmd == "pop_back") s.pop_back();
        else if(cmd == "front") cout << s.front() << nl;
        else if(cmd == "back") cout << s.back() << nl;
        else if(cmd == "sort")
        {
            int l, r; cin >> l >> r; 
            l--, r--;
            if(l > r) swap(l, r);
            sort(s.begin() + l, s.begin() + r + 1);
        }
        else if(cmd == "reverse")
        {
            int l, r; cin >> l >> r;
            l--, r--;
            if(l > r) swap(l, r);
            reverse(s.begin() + l, s.begin() + r + 1);
        }
        else if(cmd == "print")
        {
            int pos; cin >> pos; pos--;
            cout << s[pos] << nl;
        }
        else if(cmd == "substr")
        {
            int l, r; cin >> l >> r; l--, r--;
            if(l > r) swap(l, r);
            for (int i = l; i <= r; i++)
            {
                cout << s[i];
            }
            cout << nl;
        }
        else if(cmd == "push_back")
        {
            char x; cin >> x;
            s.push_back(x);
        }

        // cerr << cmd << " : " << s << nl;
    }
    

    return 0;
}
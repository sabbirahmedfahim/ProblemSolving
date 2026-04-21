#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    list<string> L;
    while(1)
    {
        string s; cin >> s;
        if(s == "end") break;

        L.push_back(s);
    }

    int q; cin >> q;
    auto curr = L.end();
    while (q--)
    {
        string cmd; cin >> cmd; //cerr << cmd << nl;

        if(cmd == "visit")
        {
            string data; cin >> data;
            bool found = false;
            for(auto it = L.begin(); it != L.end(); it++)
            {
                if(*it == data)
                {
                    curr = it; found = true;
                }
            }

            if(!found) cout << "Not Available" << nl;
            else cout << *curr << nl;
        }
        else if(cmd == "prev")
        {
            if(prev(curr) == L.end()) cout << "Not Available" << nl;
            else
            {
                curr = prev(curr);
                cout << *curr << nl;
            }
        }
        else 
        {
            if(next(curr) == L.end()) cout << "Not Available" << nl;
            else
            {
                curr = next(curr);
                cout << *curr << nl;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    map<string, set<string>> mp;
    while (n--)
    {
        string who; cin >> who;

        int m; cin >> m;
        while (m--)
        {
            string data; cin >> data;
            mp[who].insert(data);
        }
    }
    
    cout << mp.size() << nl;
    for(auto [x, y] : mp) 
    {
        cout << x << " ";
        // print(y);

        set<string> tmp = y;
        for(auto e : y)
        {
            string curr = "";
            for (int i = e.size() - 1; i > 0; i--)
            {
                curr = e[i] + curr;
                // cerr << curr << " ";
                if(tmp.count(curr)) tmp.erase(curr);
            }
        }
        cout << tmp.size() << " ";
        print(tmp);
    }

    return 0;
}
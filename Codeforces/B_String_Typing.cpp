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
    string s; cin >> s;

    string curr = "";
    curr += s[0];
    int reduce = 0;
    for (int i = 1; i < n; i++)
    {
        if(n - i >= curr.size())
        {
            string ss = s.substr(i, curr.size());
            // cerr << ss << nl;
            if(curr == ss) 
            {
                // cerr << curr << nl;
                reduce = curr.size();
            }
        }
        curr += s[i];
    }
    
    if(reduce) reduce--;

    cout << n - reduce << nl;

    return 0;
}
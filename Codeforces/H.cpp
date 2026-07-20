#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E7 + 9;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;

    if(n == 1)
    {
        if(k) cout << -1 << nl;
        else cout << 1 << nl; 
        return 0;
    }

    if((n / 2) > k)
    {
        cout << -1 << nl; return 0;
    }

    int totPair = n / 2; totPair--;

    vector<int> ans;
    ans.push_back(k - totPair);
    ans.push_back(ans.back() * 2);

    if(n == 2)
    {
        print(ans);
        return 0;
    }

    set<int> CHK;
    for(auto e : ans) CHK.insert(e);

    for (int i = 1; ; i += 2)
    {
        if(!CHK.count(i) && !CHK.count(i + 1) && ans.size() + 1 < n)
        {
            ans.push_back(i); ans.push_back(i + 1);
        }
        else if(!CHK.count(i) && ans.size() + 1 == n)
        {
            ans.push_back(i);
        }

        if(ans.size() == n) break;
    }
    
    print(ans);


    return 0;
}
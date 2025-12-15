// took hints from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int_fast32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k, x; cin >> n >> k >> x;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));

    vector<vector<int>> groups;
    vector<int> curr;
    vector<int> diff;

    for (int i = 0; i < n; i++)
    {
        if(curr.empty()) curr.push_back(a[i]);
        else if((a[i] - curr.back() <= x)) curr.push_back(a[i]);
        else
        {
            diff.push_back(a[i] - curr.back()); // ***

            groups.push_back(curr);
            curr.clear();
            curr.push_back(a[i]);
        }
    }
    if(curr.size() > 0) groups.push_back(curr);

    // for (int i = 0; i < groups.size(); i++)
    // {
    //     for (int j = 0; j < groups[i].size(); j++)
    //     {
    //         cout << groups[i][j] << " ";
    //     }
    //     cout << nl;
    // }

    // print(diff);

    // for(auto &e : diff)
    // {
    //     if(e & 1) e++; // maybe ok
    // }
    if(diff.size() > 0) 
    {
        sort(all(diff));
    }
    int currGroups = groups.size();
    // cerr << currGroups << nl;
    
    for (int i = 0; i < diff.size() && k; i++)
    {
        // int need = (diff[i] / 2) / x;
        // if(need == 0) need = 1;

        int need = (diff[i] - 1) / x; // fixed this portion after reading the editorial

        if(k >= need) 
        {
            currGroups--;
            k -= need;
        }
    }
    
    cout << currGroups << nl;

    return 0;
}
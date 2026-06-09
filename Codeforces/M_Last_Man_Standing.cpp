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

    multiset<pair<int, int>> ml;
    set<pair<int, int>> killed;
    
    for (int i = 1; i <= n; i++)
    {
        int data; cin >> data;

        if(data == 0) killed.insert({0, i});
        else ml.insert({data, i});
    }

    vector<pair<int, int>> ans;

    while (!ml.empty() && !killed.empty())
    {
        auto it = ml.begin();
        auto it2 = killed.begin();

        ans.push_back({it->second, it2->second});

        killed.erase(it2);
        int x = it->first, y = it->second;
        x--;

        ml.erase(it);

        if(x >= 1) ml.insert({x, y});
        else 
        {
            killed.insert({0, y});
        }
    }

    if(ml.empty())
    {
        cout << "YES" << nl;
        for(auto [A, B] : ans)
        {
            cout << A << " " << B << nl;
        }
    }
    else cout << "NO" << nl;

    return 0;
}
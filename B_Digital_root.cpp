#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    map<int, vector<int>> mp;
    for (int i = 1; i <= 200; i++)
    {
        int sum = 0, data = i;
        while (data)
        {
            sum += data % 10;
            data /= 10;
        }
        // cout << i << " --> " << sum << nl;
        mp[sum].push_back(i);
    }
    
    for (int i = 1; i <= 9; i++)
    {
        cout << i << " --> ";
        print(mp[i]);
    }
    

    return 0;
}
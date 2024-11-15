#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<vector<int>> mat(n, vector<int>(n-1));
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            cin >> mat[i][j];
            if(j == 0) mp[mat[i][j]]++;
        }
    }

    int mxOccurance = -1, mx = 0;
    for(auto [key, val] : mp)
    {
        if(val > mx)
        {
            mx = val; mxOccurance = key;
        }
    }
    // cout << mxOccurance << nl;
    vector<int> v;
    v.push_back(mxOccurance);

    int row;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(j == 0 && mat[i][j] != mxOccurance)
            {
                row = i;
                i = n;
            }
        }
    }
    for (int i = row; i <= row; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            v.push_back(mat[i][j]);
        }
    }
    print(v);
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
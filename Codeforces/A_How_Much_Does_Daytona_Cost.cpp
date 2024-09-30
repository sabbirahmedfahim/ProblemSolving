#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, target; cin >> n >> target;
        vector<int> v(n);
        bool isThere = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == target) isThere = true;
        }
        if(isThere) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    

    return 0;
}
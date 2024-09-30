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
        int n; cin >> n;
        vector<int> v(n+1);
        int freq[n+1] = {0};
        bool flag = true;
        int mn = INT_MAX;
        for (int i = 1; i < n+1; i++)
        {
            cin >> v[i];
            if(v[i] < mn) mn = v[i];
            freq[v[i]]++;
            if(freq[v[i]] > 1 || v[i] > n || v[i] < 1) flag = false;
        }
        if(v[1] == mn && flag) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}
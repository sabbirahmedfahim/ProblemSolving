#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    vector<int> v(n+1); // 1-based index
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> cnt(n+1);
    set<int> s;
    // for (int i = n; i >= 0; i--)
    for (int i = n; i >= 1; i--)
    {
        s.insert(v[i]);
        cnt[i] = s.size();
    }
    // reverse(cnt.begin(), cnt.end());

    for (int i = 1; i <= m; i++)
    {
        int pos; cin >> pos;
        cout << cnt[pos] << nl;

        // bad time complexity
        // set<int> s;
        // for (int j = pos; j <= n; j++)
        // {
        //     s.insert(v[j]);
        // }
        // cout << s.size() << nl;
    }
    

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;
    int cur = 1, cnt = 0;
    while (1)
    {
        bool only_zero = true;
        for (int i = 0; i < n; i++)
        {
            if(v[i] == 0) continue;
            else
            {
                only_zero = false;
                if(v[i] == cur)
                {
                    v[i] = 0; cur++;
                }
            }
        }
        if(only_zero) break;
        cnt++;
    }
    cout << cnt << nl;

    return 0;
}
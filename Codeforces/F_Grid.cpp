// solution
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
// QR Code :) -> Scanning it tells you that you need to find the 4×4 grid with the maximum sum.
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<string> v(21); for(auto &data: v) cin >> data;
    int ans = 0;
    for (int i = 0; i < 18; i ++)
      for (int j = 0; j < 18; j ++) {
        int cnt = 0;
        for (int k = 0; k < 4; k ++)
          for (int l = 0; l < 4; l ++) {
            cnt += v[i + l][j + k] - '0';
          }
        ans = max(ans, cnt);
    }
    cout << ans << nl;

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int n, k; string s; cin >> n >> k >> s;

    string target = "";
    string ultaPalta = "";
    for (int i = 0; i < k; i++)
    {
        target += 'O';
        ultaPalta += 'X';
    }
    // cout << target << " " << ultaPalta << nl;

    int cnt = 0;
    for (int i = 0; i < n-k+1; i++)
    {
        if(s[i] == 'O' && s.substr(i, k) == target) 
        {
            cnt++;
            s.replace(i, k, ultaPalta);
        }
    }
    cout << cnt << nl;

    return 0;
}

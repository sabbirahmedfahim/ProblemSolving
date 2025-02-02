#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k; int tmp = n;
    k--; //greddy

    vector<int> ans;

    for (int i = 2; i <= 1E6 && k; i++)
    {
        while (n%i == 0 && k--)
        {
            ans.push_back(i); 
            n /= i;
            if(k == 0) break;   
        }
    }

    ans.push_back(n); sort(all(ans));

    if(k == 0) 
    {
        int s = 1; 
        for(auto data : ans) s *= data;
        if(s == tmp && ans[0] != 1) 
        {
            print(ans);
        }
        else cout << -1 << nl;
    }
    else cout << -1 << nl;

    // print(ans);

    return 0;
}
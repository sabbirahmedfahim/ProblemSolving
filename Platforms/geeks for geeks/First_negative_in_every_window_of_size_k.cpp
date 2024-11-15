#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int n; cin >> n;
    vector<int> v(n);
    for(auto &data : v) cin >> data;
    int k; cin >> k;
    // print(v);

    vector<int> ans;
    for (int i = 0; i < n-k+1; i++)
    {
        int firstNeg = 0;
        for (int j = i; j < i+k; j++)
        {
            if(firstNeg == 0 && v[j] < 0) 
            {
                firstNeg = v[j]; break;
            }
        }
        ans.push_back(firstNeg);
    }

    print(ans);

    return 0;
}
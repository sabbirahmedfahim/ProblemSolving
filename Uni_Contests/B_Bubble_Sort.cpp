#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n); for(auto &data : v) cin >> data;
    print(v);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(v[j] > v[j+1]) 
            {
                swap(v[j], v[j+1]); print(v);
            }
        }
    }
    

    return 0;
}
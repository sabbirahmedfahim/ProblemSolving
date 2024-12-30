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
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if(v[j] < v[mini]) mini = j;
        }
        if(i != mini) 
        {
            swap(v[i], v[mini]); cnt++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i == n-1) cout << v[i];
        else cout << v[i] << " ";
    }

    cout << nl << cnt << nl;

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, p; cin>>n>>p;

    vector<pair<char, int>> a[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            char c; int x; cin >> c >> x;
            a[i].push_back({c, x});
        }
    }
    

    vector<int>successful(p,0),tryy(p,0),failed(p,0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            char c = a[i][j].first; int x=a[i][j].second;
            
            if(c=='+' && x==0) {successful[j]++;tryy[j]++;}
            else if(c=='+' && x!=0){successful[j]++;tryy[j]++;failed[j]+=x;}
            else if(c=='-' && x!=0){tryy[j]++;failed[j]+=x;}
        }
    }

    for(int i=0;i<p;i++){
        cout<<successful[i]<<' '<<tryy[i]<<' '<<failed[i]<<' ';
        cout<<nl;
    }

    
 


    return 0;
}
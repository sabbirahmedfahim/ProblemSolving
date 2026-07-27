// used test cases
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int m, n; cin >> m >> n;
    vector<int> magna(n);
    vector<int> adj[m];

    int curr = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int data; cin >> data;
            adj[i].push_back(data);
        }
    }
    for (int i = 0; i < m; i++)
    {
        // cerr << "#"; for(auto e : magna) cerr << e << " "; cerr << nl;
        for (int j = 0; j < n - 1; j++)
        {
            if(j - 1 >= 0) magna[j] = min(magna[j], magna[j - 1]);
            
            int take = min(adj[i][j], magna[j]);
            adj[i][j] -= take;
            magna[j] -= take;

            if(magna[j] == 0)
            {
                while (j < n)
                {
                    magna[j] = 0; j++;
                }
            } 
        }
        // cerr << "##"; for(auto e : magna) cerr << e << " "; cerr << nl;
        for (int j = 0; j < n; j++)
        {
            int data = adj[i][j]; 
            // cerr << data << " ";

            curr += data;

            if(j > 0) 
            {
                for (int k = 0; k < j; k++)
                {
                    magna[k] += data;
                }
            }
        }
        // cerr << nl;
        cout << curr << " ";
    }
    cout << nl;
    

    return 0;
}
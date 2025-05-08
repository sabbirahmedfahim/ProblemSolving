#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E4 + 5;
int inf = INT_MAX;
int dis[N];
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e;
    cin >> n >> e;

    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        EdgeList.push_back({u, v, w}); // one way road
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[1] = 0;

    for (int i = 0; i < n; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if (dis[u] < inf && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }

    for (Edge ed : EdgeList)
    {
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;

        if (dis[u] < inf && dis[u] + w < dis[v])
        {
            cout << "-inf" << nl;
            return 0;
        }
    }

    if (dis[n] == inf)
    {
        cout << -1 << nl;
        return 0;
    }
    // for(int i=1; i<=n; i++) cout << dis[i] << " "; cout << nl;

    cout << dis[n] << nl;

    return 0;
}

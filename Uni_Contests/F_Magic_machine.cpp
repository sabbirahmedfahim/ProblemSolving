// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 9999+1;
bool vis[N];
int level[N];
int sumOfDigits(int n)
{
    int res = 0;
    while (n)
    {
        res += n%10;
        n /= 10;
    }
    return res;
}
void bfs(int src, int dist)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        vector<int> v;
        if(par <= 3333) v.push_back(par * 3);
        v.push_back(par + sumOfDigits(par));
        v.push_back(par - 2);
        for (auto child : v)
        {
            if (child >= 0 && child <= 9999 && !vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                if(child == dist) return;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int src, dist; cin >> src >> dist;

    if(src == dist) // edge case?
    {
        cout << 0 << nl; return 0;
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    bfs(src, dist);
    cout << level[dist] << nl;
    

    return 0;
}
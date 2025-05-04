#include <bits/stdc++.h>

using namespace std;

#define pb push_back
vector<int> adj_list[1000];
int indeg[1000];
set<int> se;
queue<int> q;
vector<int> vec;
void topsort()
{

    while (!q.empty())
    {
        int fr = q.front(); // 1
        vec.pb(fr);
        q.pop();
        for (int i = 0; i < adj_list[fr].size(); i++)
        {
            int v = adj_list[fr][i]; // 3
            if (indeg[v] > 0)
            {
                indeg[v]--;
            }
            if (indeg[v] == 0)
            {
                q.push(v);
            }
        }
    }
}

int main()
{

    int nodes, edges;
    cin >> nodes >> edges;
    int u, v;
    for (int i = 1; i <= edges; i++)
    {
        cin >> u >> v;
        adj_list[u].pb(v);
        indeg[v]++;
        se.insert(u);
        se.insert(v);
    }
    for (auto &it : se)
    {
        if (indeg[it] == 0)
        {
            q.push(it);
        }
    }
    topsort();

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
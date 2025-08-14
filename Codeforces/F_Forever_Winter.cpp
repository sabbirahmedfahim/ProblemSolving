// watch the module, if i got ac, its very good
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
finding y : pick a random leaf node, it's parent(which is single anytime), parent's size - 1 is y
*/
const int N = 1E5 + 5;
vector<int> adjList[N];
void solve()
{
    int n, e; cin>> n >> e;
    set<int> st;
    while (e--)
    {
        int a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a); 

        st.insert(a); st.insert(b);
    }

    map<int, int> freq;
    int leafNode;
    for(auto e : st)
    {
        if(adjList[e].size() == 1) 
        {
            leafNode = e; break;
        }
    }

    int y = adjList[adjList[leafNode].front()].size() - 1;
    int x = -1;

    for(auto e : st)
    {
        if(adjList[e].size() > 1 && adjList[e].size() != (y + 1))
        {
            x = adjList[e].size(); break;   
        }
    }

    if(x == -1)
    {
        x = y + 1;
    }

    cout << x << " " << y << nl;

    for(auto &e : adjList)
    {
        e.clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    
    return 0;
}
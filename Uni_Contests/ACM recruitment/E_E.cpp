// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// const ll N = 2e5 + 5;
// vector<ll> v[N];
// bool vis[N];
// ll level[N];
// ll cnt;
// void bfs(ll src)
// {
//     queue<ll> q;
//     q.push(src);
//     vis[src] = true;
//     level[src] = 0;
//     while (!q.empty())
//     {
//         ll par = q.front();
//         q.pop();
//         for (ll child : v[par])
//         {
//             if (!vis[child])
//             {
//                 q.push(child);
//                 vis[child] = true;
//                 level[child] = level[par] + 1;
//                 cnt = max(cnt, level[child]);
//             }
//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(NULL);
    
//     ll n, e;
//     cin >> n;
//     e = n - 1;
//     while (e--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }

//     ll src = 1;
//     while (src <= n)
//     {
//         memset(vis, false, sizeof(vis));
//         memset(level, -1, sizeof(level));
//         cnt = 0;
//         bfs(src);
//         cout << cnt << " ";
//         src++;
//     }

//     return 0;
// }

// youtube
/*
    author: kartik8800
*/
 
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
 
vector<int> tree[200001];
int depth[200001];
int ans[200001];
 
void eval_depth(int src, int par)
{
    int src_depth = 0;
    for(int child : tree[src])
    {
        if(child != par)
        {
            eval_depth(child, src);
            src_depth = max(src_depth, 1 + depth[child]);
        }
    }
    depth[src] = src_depth;
}
 
void solve(int src, int par, int par_ans)
{
    vector<int> prefixMax, suffixMax;
    // get depth of child nodes.
    for(int child : tree[src])
    {
        if(child != par)
        {
            prefixMax.push_back(depth[child]);
            suffixMax.push_back(depth[child]);
        }
    }
    // build prefix and suffix
    for(int i = 1; i < prefixMax.size(); i++)
        prefixMax[i] = max(prefixMax[i], prefixMax[i-1]);
    for(int i = (int)suffixMax.size() - 2; i >= 0; i--)
        suffixMax[i] = max(suffixMax[i], suffixMax[i+1]);
 
    //eval ans for every child c_no
    int c_no = 0;
    for(int child : tree[src])
    {
        if(child != par)
        {
            int op1 = (c_no == 0) ? INT_MIN : prefixMax[c_no - 1];
            int op2 = (c_no == (int)suffixMax.size() - 1) ? INT_MIN : suffixMax[c_no + 1];
            int partial_ans = 1 + max(par_ans, max(op1,op2));
 
            solve(child, src, partial_ans);
            c_no++;
        }
    }
 
    //eval ans for src
    ans[src] = 1 + max(par_ans, (prefixMax.empty() ? -1 : prefixMax.back()));
}
 
int main() {
   fast_io;
   ll t,n,m,x,i,j,k,q;
   //cin >> t;
   t = 1;
   while(t--)
   {
        cin >> n;
        fr(0,n-1)
        {
            int u,v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }
        eval_depth(1, 0);
        solve(1, 0, -1);
        fr(1,n+1)
            cout << ans[i] <<' ';
   }
   return 0;
}
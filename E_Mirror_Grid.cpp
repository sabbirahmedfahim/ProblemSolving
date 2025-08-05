#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E3 + 5;
char mat[N][N], mat_90[N][N], mat_180[N][N], mat_270[N][N];
int n;
void solve()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            mat[i][j] = s[j];
        }
    }
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            mat_90[i][j] = mat[j][i];
            cerr << mat_90[i][j] << " "; 
        }
        cerr << nl;
    }
    cerr << nl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            mat_180[i][j] = mat[n - i - 1][n - j - 1];
            cerr << mat_180[i][j] << " ";
        }
        cerr << nl;
    }
    cerr << nl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            mat_270[i][j] = mat_180[j][i];
            cerr << mat_270[i][j] << " ";
        }
        cerr << nl;
    }


    int cnt = 0;
    for (int i = 0; i < 1; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if(mat[i][j] == mat_90[i][j] && mat_90[i][j] == mat_180[i][j] && mat_180[i][j] == mat_270[i][j]) continue;
            cnt++;
        }
    }

    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
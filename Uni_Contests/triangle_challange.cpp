#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E3;
char mat[N][N];
void printRow(int n, int cur, int idx) // n is row
{
    if(cur == 0) return;
    // cout << '*';
    mat[n][idx] = '*';
    printRow(n, cur-1, idx+1);
}
void rec(int n, int cur)
{
    if(n == 0) return;
    printRow(n, cur, 1);
    rec(n-1, cur+1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    // printRow(n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) mat[i][j] = ' ';
    }

    rec(n, 1);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) 
        {
            cout << mat[i][j];
        }
        cout << nl;
    }

    return 0;
}
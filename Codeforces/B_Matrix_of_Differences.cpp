#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
very easy, just take input:
1
4
and try to connect the answer
*/
void solve()
{
    int n; cin >> n;
    vector<vector<int>> mat(n, vector<int> (n));
    int highh = n*n, loww = 1;
    bool isLow = true;
    int op = 0;
    for (int i = 0; i < n; i++, op++)
    {
        for (int j = 0; j < n && isLow; j++)
        {
            if(op++%2 == 0) mat[i][j] = loww++;
            else mat[i][j] = highh--;
        }
        for (int j = n-1; j >= 0 && !isLow; j--)
        {
            if(op++%2) mat[i][j] = loww++;
            else mat[i][j] = highh--;
        }
        isLow = !isLow;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
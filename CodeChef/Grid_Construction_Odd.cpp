// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define print(v) for (auto data : v) cout << data << " "; cout << nl

using namespace std;

void solve() 
{
    int n; 
    cin >> n;
    int row = n, col = n;
    vector<vector<int>> mat(n + 1, vector<int>(n + 1)); // 1-based index for better understanding

    deque<int> v, numOrder;
    for (int i = 1; i <= n; i++) 
        v.push_back(i);

    bool chotoTheke = true;
    while (!v.empty()) 
    {
        if (chotoTheke) 
        {
            numOrder.push_back(v.front());
            v.pop_front();
        } else 
        {
            numOrder.push_back(v.back());
            v.pop_back();
        }
        chotoTheke = !chotoTheke;
    }

    int sz = numOrder.size();
    for (int i = 0; i < sz - 1; i++) numOrder.push_back(numOrder[i]);

    int idx = 0;
    for (int startCol = 1; startCol <= col; startCol++) 
    {
        int r = 1, c = startCol;
        while (r <= row && c > 0) 
        {
            // cout << r << " " << c << nl;
            mat[r][c] = numOrder[idx];
            r++;
            c--;
        }
        idx++;
    }
    cout << nl; 
    
    for (int startRow = 2; startRow <= row; startRow++) // startRow = 2 because we previously traversed row 1
    {
        int r = startRow, c = col;
        while (r <= row && c > 0) 
        {
            // cout << r << " " << c << nl;
            mat[r][c] = numOrder[idx];
            r++;
            c--;
        }
        idx++;
    }

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            cout << mat[i][j] << " ";
        }
        cout << nl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t; 
    cin >> t; 
    while (t--) solve();

    return 0;
}

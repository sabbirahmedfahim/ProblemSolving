#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
int n = 10;
int mn(int i, int j)
{
    int rowWise = i - 0;
    int colWise = j - 0;
    int ans = min(rowWise, colWise);
    int rowWise2 = 9 - i;
    ans = min(ans, rowWise2);
    int colWise2 = 9 - j;
    ans = min(ans, colWise2);
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char mat[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> mat[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (mat[i][j] == 'X')
                {
                    cnt += mn(i, j) + 1;
                    // cout << cnt << " ";
                }
            }
            // cout << nl;
        }
        cout << cnt << nl;
    }

    return 0;
}
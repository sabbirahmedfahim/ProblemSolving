#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        int mat[r][c];
        cout << "Case " << cs++ << ":" << nl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "*";
            }
            cout << nl;
        }
    }

    return 0;
}
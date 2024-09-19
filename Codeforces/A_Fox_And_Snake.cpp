#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    bool flag = false;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i % 2 == 0)
                cout << "#";
            else
            {
                if (!flag && j == c-1) cout << "#";
                else if (flag && j == 0) cout << "#";
                else cout << ".";
            }
        }
        if(i%2 != 0 && flag) flag = false;
        else if(i%2 != 0 && !flag) flag = true;
        cout << nl;
    }

    return 0;
}
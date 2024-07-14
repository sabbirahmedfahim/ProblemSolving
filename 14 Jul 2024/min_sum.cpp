#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int op = 0;
        int x = v[1] - v[0];
        int y = v[2] - v[1];
        if (x == y && x == 0)
        {
            op = 0;
        }
        else if (x == y && x > 0)
        {
            op++;
        }
        else if (x != y && x == 0 || x != y && y == 0)
        {
            op += 1;
        }
        else
            op += 2;

        cout << op << endl;
    }

    return 0;
}
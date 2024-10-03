#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        float sqrtVal = sqrt(n);
        cout << s[4] << endl;
        if (sqrtVal != floor(sqrtVal)) cout << "No" << endl;
        else
        {
            if(n == 9 && s[4] == 1) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }

    return 0;
}
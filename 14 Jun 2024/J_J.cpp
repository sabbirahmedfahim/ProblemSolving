#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        bool flag = false;
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        if (a>1 && b>1)
        {
            flag = true;
        }
        if (b>1 && c>1)
        {
            flag = true;
        }
        if (a>1 && c>1)
        {
            flag = true;
        }
        
        if (flag)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }

    return 0;
}
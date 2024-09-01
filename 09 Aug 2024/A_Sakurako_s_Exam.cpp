#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) 
    {
        int a, b; cin >> a >> b;
        if(b%2 == 0) b = 0;
        else b = 2;
        if(abs(a-b) == 0 || a%2 == 0 && b == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
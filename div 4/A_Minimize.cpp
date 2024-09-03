#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        int c = b-a;
        if(c == 0)
        {
            cout << (c-a)+(b-c) << endl; break;
        } 
        if(c%2==1) c--;
        cout << (c-a)+(b-c) << endl;
    }
    

    return 0;
}
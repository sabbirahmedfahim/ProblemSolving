#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int a, b, c;
        cin>> a>> b>> c;
        if(a+b == c) cout << "YES" <<nl;
        else if (a+c == b) cout << "YES" <<nl;
        else if (b+c == a) cout << "YES" <<nl;
        else cout << "NO" <<nl;
    }
    

    return 0;
}
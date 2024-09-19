#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0;
    while (n--)
    {
        int a, b; cin >> a >> b;
        if(b-a >= 2) cnt++;
    }
    cout << cnt;

    return 0;
}
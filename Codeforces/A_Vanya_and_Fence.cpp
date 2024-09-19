#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n, h; cin >> n >> h;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        if(data > h) ans+=2;
        else ans++;
    }
    cout << ans;

    return 0;
}
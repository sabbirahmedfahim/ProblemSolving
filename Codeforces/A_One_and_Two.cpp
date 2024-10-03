#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int countTwo = 0;
        for (int i = 0; i < n; i++)
        {
            int data; cin >> data;
            if(data == 2) countTwo++;
        }
        if(countTwo%2 != 0) cout << -1 << nl;
        else if(countTwo == 0 && n%2 == 0) cout << 1 << nl;
        else cout << countTwo/2 << nl;
    }

    return 0;
}
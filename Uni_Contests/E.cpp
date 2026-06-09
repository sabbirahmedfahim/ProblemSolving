#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, idx; char ch; 
    cin >> n >> idx >> ch;

    int a = 0, b = 0, c = 0;

    if(ch == 'L')
    {
        c = n - idx;

        a = idx / 2;
        b = idx / 2;

        if(idx % 2 == 1) 
        {
            a++; b++;
        }

        cout << a << " " << b << " " << c << nl;
    }
    else // R
    {
        a = idx - 1;

        int val = n - idx + 1;

        c = val / 2;
        b = val / 2;

        if(val % 2 == 1) 
        {
            c++; b++;
        }

        cout << a << " " << b << " " << c << nl;
    }

    return 0;
}
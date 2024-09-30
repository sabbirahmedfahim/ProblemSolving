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
        int n, d; cin >> n >> d;
        vector<int> v(n+2);
        v[0] = 0;
        v[n+1] = d;
        for (int i = 1; i < n+1; i++)
        {
            cin >> v[i];
        }
        // for(int data : v) cout << data << " ";
        // cout << nl;
        int vol = (v[n+1] - v[n])*2;
        for (int i = 1; i < n+2; i++)
        {
            if(v[i] - v[i-1] > vol) vol = v[i] - v[i-1];
        }
        cout << vol << nl;
    }
    

    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n; cin >> n;
    if(n%2 != 0)
    {
        cout << -1;
        return 0;
    }
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        v[i] = i;
    }
    for (int i = 1; i <= n; i+=2)
    {
        swap(v[i], v[i+1]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    

    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0;
    if(n%3 == 0) cout << n/3;
    else cout << n/3 + 1;

    return 0;
}
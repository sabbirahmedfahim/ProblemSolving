#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int cnt = 0;
    int n = 100;
    while (n != 0)
    {
        if(n%10 == 0) cnt++;
        n/=10;
    }
    cout << cnt;

    return 0;
}
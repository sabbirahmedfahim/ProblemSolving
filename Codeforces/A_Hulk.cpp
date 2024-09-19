#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(i != 1) cout << "that ";
        if(i == 1) cout << "I hate ";
        else if (i != 1 && i%2 == 0) cout << "I love ";
        else if (i != 1 && i%2 != 0) cout << "I hate ";
        if(i == n) cout << "it";
    }
    

    return 0;
}
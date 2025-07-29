#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
it's much easier and recommended to understand function calls using RECURSION TREE
*/
int fibo(int n) // O(2ⁿ)
{
    if(n == 0 || n == 1) return n;

    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cout << fibo(6); // 0 1 1 2 3 5

    return 0;
}
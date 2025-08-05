/*
Reverse an array recursively.
*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void rev(vector<int> & a, int curr)
{
    if(curr >= a.size()/2) return;

    swap(a[curr], a[a.size() - curr - 1]);
    rev(a, curr + 1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> a = {1, 2, 3, 4, 5};
    rev(a, 0);

    print(a);

    return 0;
}
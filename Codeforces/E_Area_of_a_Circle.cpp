#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const double PI = 3.141592653;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    double R; cin >> R;
    double area = PI * (R*R);
    cout << fixed << setprecision(9) << area << nl;

    return 0;
}
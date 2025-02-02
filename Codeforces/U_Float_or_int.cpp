#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    float x; cin >> x;
        
    if(ceil(x) == floor(x)) cout << "int " << x << nl;
    else 
    {
        cout << "float " << floor(x) << " ";
        cout << fixed << setprecision(3) << x - floor(x)<< nl;
    }

    return 0;
}
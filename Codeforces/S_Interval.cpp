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
    if(x >= 0 && x <= 100)
    {
        cout << "Interval" << " ";
        if(x >= 0 && x <= 25)
        {
            if(x == 0) cout << "(";
            else cout << "[";
            cout << 0 << "," << 25;
            if(ceil(x) > 25) cout << ")";
            else cout << "]";
        }
        else if(x > 25 && x <= 50)
        {
            if(x > 25) cout << "(";
            // else cout << "[";
            cout << 25 << "," << 50;
            if(ceil(x) > 50) cout << ")";
            else cout << "]";
        }
        else if(x > 50 && x <= 75)
        {
            if(x > 50) cout << "(";
            // else cout << "[";
            cout << 50 << "," << 75;
            if(ceil(x) < 75) cout << ")";
            else cout << "]";
        }
        else if(x > 75 && x <= 100)
        {
            if(x > 75) cout << "(";
            // else cout << "[";
            cout << 75 << "," << 100;
            if(ceil(x) < 100) cout << ")";
            else cout << "]";
        }
    }
    else cout << "Out of Intervals" << nl;

    return 0;
}
// Resolved from tle
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    double px, py, qx, qy; 
    cin >> px >> py >> qx >> qy;


    double x = abs(px - qx);
    x *= x;
    double y = abs(py - qy);
    y *= y;

    double sum = x + y;
    double mnDist = sqrtl(sum);
    // cout << mnDist << nl;

    double tot_sum = 0;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        double data; cin >> data; 
        tot_sum += data;

        a[i] = data;
    }
    
    if(px == qx && py == qy && n == 1)
    {
        cout << "No" << nl;
        return;
    }
    if(n == 2)
    {
        vector<double> b;
        b.push_back(a[0]);
        b.push_back(a[1]);
        b.push_back(mnDist);
        sort(all(b));

        if((b[0] + b[1]) < b[2]) // it breaks the tri-angle law !!
        {
            cout << "No" << nl; 
        }
        else
        {
            sort(all(a));
            double mx = a[1] + a[0], mn = a[1] - a[0];
            if(mx >= mnDist || mn <= mnDist) cout << "Yes" << nl; // hmmmm....
            else cout << "No" << nl;
        }
        return;
    }
    
    if(mnDist <= tot_sum) cout << "Yes" << nl;
    else cout << "No" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
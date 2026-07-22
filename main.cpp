#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int q; cin >> q;
    vector<long double> a; a.push_back(0);

    long double prev = 0;
    while (q--)
    {
        int cmd; cin >> cmd;
        
        if(cmd == 1)
        {
            int n; cin >> n;
            long double data; cin >> data;
            a[0] += data; if(n < a.size() - 1) a[n] -= data;
            for (int i = 0; i < n; i++)
            {
                prev -= a[i];
                a[i] += data;
                prev += a[i];
            }
            long double sum = prev, sz = a.size();
            cout << fixed << setprecision(6) << sum / sz << nl;
        }
        else if(cmd == 2)
        {
            long double data; cin >> data;
            prev += data;
            long double sum = prev, sz = a.size() + 1;
            cout << fixed << setprecision(6) << sum / sz << nl;

            a.push_back(data);
        }
        else 
        {
            prev -= a.back();
            long double sum = prev, sz = a.size() - 1;
            cout << fixed << setprecision(6) << sum / sz << nl;

            a.pop_back();
        }
    }
    

    return 0;
}
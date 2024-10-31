#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> A(n), B(n), vA(n), vB(n);
    for(auto &data : A) cin >> data;
    for(auto &data : B) cin >> data;
    vA = A; vB = B;
    sort(vA.begin(), vA.end());
    sort(vB.begin(), vB.end());
    set<ll> distictNumbers;
    // print(vA);
    // print(vB);

    ll mnCost = 0;
    for (int i = 0; i < n; i++)
    {
        bool vis = false;
        if(A[i] <= B[i])
        {
            cout << "A[i] = " << A[i] << " ---> " << "B[i] = " << B[i] << nl;
            for (int i = 0; i < n && !vis; i++)
            {
                if(!distictNumbers.count(vA[i]))
                {
                    mnCost += vA[i];
                    cout << "original : " << mnCost << nl;
                    distictNumbers.insert(vA[i]);
                    vis = true;
                }
            }
        }
        else if(!distictNumbers.count(A[i]))
        {
            cout << "A[i] = " << A[i] << " ---> " << "B[i] = " << B[i] << nl;
            mnCost += B[i];
            distictNumbers.insert(A[i]);
            cout << "Second : " << mnCost << nl;
        }
        else 
        {
            cout << "A[i] = " << A[i] << " ---> " << "B[i] = " << B[i] << nl;
            mnCost += A[i];
            cout << "original : " << mnCost << nl;
        }
    }
    cout << mnCost << nl << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
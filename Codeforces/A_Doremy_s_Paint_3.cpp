#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        int cntOdd = 0, cntEven = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]%2==0) cntEven++;
            else cntOdd++;
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end()); // 2 er beshi kina
        if(cntEven > cntOdd && v[0]%2 == 0) cout << "Yes" << nl;
        else if(cntEven < cntOdd && v[0]%2 != 0) cout << "Yes" << nl;
        else if(abs(cntEven-cntOdd) > 1 && cntEven == 0 && cntOdd%2==0) cout << "Yes" << nl;
        else if(abs(cntEven-cntOdd) > 1 && cntOdd == 0 && cntEven%2==0) cout << "Yes" << nl;
        else if(abs(cntEven-cntOdd) == 0) cout << "Yes" << nl;
        else cout << "No" << nl;
        // else if(v.size() > 2 || abs(cntEven-cntOdd) > 1 && cntEven != 0 && cntOdd != 0 || cntOdd == 0 && cntEven%2!=0 || cntEven == 0 && cntOdd%2!=0) cout << "No" << nl;
    }
    

    return 0;
}
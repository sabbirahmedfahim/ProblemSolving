#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mx = 0;
        int alice = 0, bob = 0;
        bool aliceTurn = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= mx)
            {
                mx = arr[i];
                if(aliceTurn) alice++;
                else bob++;
                aliceTurn = !aliceTurn;
            }
        }
        if (alice > bob)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
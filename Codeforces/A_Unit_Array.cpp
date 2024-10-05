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
        int pos = 0, neg = 0;
        while (n--)
        {
            int data; cin >> data;
            if(data == 1) pos++;
            else neg++;
        }
        // if(pos == neg || pos > neg) cout << 0 << nl;
        // else if(neg > pos) cout << neg - pos << nl;
        int cnt = 0;
        while (neg > pos)   
        {
            neg--;
            pos++;
            cnt++;
        }
        if(neg%2 == 1) cnt++;
        cout << cnt << nl;
    }

    return 0;
}
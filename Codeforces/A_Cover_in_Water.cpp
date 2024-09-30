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
        string s; cin >> s;
        int sumDot = 0;
        int insideCnt = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i-1] == '.' && s[i] == '.') 
            {
                insideCnt++;
            }
            else 
            {
                sumDot += insideCnt--;
                insideCnt = 0;
            }
        }
        if(sumDot == 0) cout <<sumDot << nl;
        else cout <<sumDot + 1 << nl;
    }
    

    return 0;
}
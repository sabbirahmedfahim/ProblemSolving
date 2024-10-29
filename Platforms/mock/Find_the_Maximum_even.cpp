#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n; cin >> n;
    vector<ll> evenArr;
    vector<ll> oddArr;
    bool oddAche = false;
    bool evenAche = false;
    for (int i = 0; i < n; i++)
    {
        ll data; cin >> data;
        if(data%2 == 0) 
        {
            evenArr.push_back(data);
            evenAche = true;
        }
        else 
        {
            oddArr.push_back(data);
            oddAche = true;
        }
    }
    int szEven = 0, szOdd = 0;
    if(evenArr.size() >= 1) 
    {
        sort(evenArr.begin(), evenArr.end(), greater<int> ());
        szEven = evenArr.size();
    }
    if(oddArr.size() >= 1) 
    {
        sort(oddArr.begin(), oddArr.end(), greater<int> ());
        szOdd = oddArr.size();
    }

    ll mxFromEven = 0;
    if(evenAche) mxFromEven = evenArr[0];
    ll mxFromOdd = 0;
    if(oddAche) mxFromOdd = oddArr[0];

    if(evenAche && szEven > 1) mxFromEven += evenArr[1];
    if(oddAche && szOdd > 1) mxFromOdd += oddArr[1];

    if(oddAche && mxFromOdd%2 == 0 && mxFromOdd >= mxFromEven) cout << mxFromOdd << nl;
    else if(evenAche) cout << mxFromEven << nl;


    return 0;
}
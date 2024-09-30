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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int data : v) cout << data << " ";
        int target;
        int mid;
        int l, r;
        while (l <= r)
        {
            mid = (l+r)/2;
            if(v[mid] == target) break;
            else if(target > v[mid]) l = mid+1;
            else r = mid - 1; 
        }
    }
    

    return 0;
}
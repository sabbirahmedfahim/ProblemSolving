#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
map<ll, ll> mp; // map to searching the target, if we do not find, will go for closest left/right
int findRangeStart(int target, vector<ll> & v, int n)
{
    // if(target < v.front() || target > v.back()) return -1; // wrong condition

    if(!mp.count(target)) // if we do not find the target search for the closest right
    {
        // closest to the right
        int idx = -1;
        int l = 0, r = n-1, mid;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            if(target <= v[mid])
            {
                idx = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        target = v[idx];
    }

    // first occurence 
    int idx = -1;
    int l = 0, r = n-1, mid;
    while (l <= r)
    {
        mid = l + (r-l)/2;
        if(target == v[mid])
        {
            idx = mid;
            r = mid - 1;
        }
        else if(target < v[mid]) r = mid - 1;
        else l = mid + 1;
    }
    return idx; // index of lower bound according to statement
}
int findRangeEnd(int target, vector<ll> & v, int n)
{
    // if(target < v.front() || target > v.back()) return -1; // wrong condition

    if(!mp.count(target)) // if we do not find the target search for the closest left
    {
        // closest to the left
        int idx = -1;
        int l = 0, r = n-1, mid;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            if(target >= v[mid])
            {
                idx = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        target = v[idx];
    }

    // last occurence
    int idx = -1;
    int l = 0, r = n-1, mid;
    while (l <= r)
    {
        mid = l + (r-l)/2;
        if(target == v[mid])
        {
            idx = mid;
            l = mid + 1;
        }
        else if(target < v[mid]) r = mid - 1;
        else l = mid + 1;
    }
    return idx;
}
void solve() // implementation
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    sort(all(v));
    for(auto data : v) mp[data]++;

    int q; cin >> q;
    while (q--)
    {
        int lowVal, highVal; cin >> lowVal >> highVal;
        int startINdex = findRangeStart(lowVal, v, n), endINdex = findRangeEnd(highVal, v, n);
        if(startINdex == -1 || endINdex == -1 || startINdex > endINdex) cout << 0 << " ";
        else cout << endINdex-startINdex+1 << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();
    
    return 0;
}

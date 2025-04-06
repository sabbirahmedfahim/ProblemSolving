// unsolved 
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
1 1 1 3 5 -> OK
1 1 3 5 -> OK
1 1 5 -> X
1 5 -> OK
1 -> X
0 -> OK
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<bool> vis(n, false);

    int cnt = 0;
    // for (int i = 0; i < n-1; i++) // n-1 ***
    // {
    //     if(vis[i]) continue;

    //     vector<int> arektaArray(a.begin() + i + 1, a.end());
    //     sort(all(arektaArray));
    //     // print(arektaArray);

    //     int target = a[i];
    //     int hi = arektaArray.size()-1, lo = 0, idx = -1;
    //     while (lo <= hi)
    //     {
    //         int mid = lo + (hi-lo)/2;
    //         if(arektaArray[mid] < target)
    //         {
    //             idx = mid;
    //             lo = mid + 1;
    //         }
    //         else hi = mid - 1;
    //     }

    //     if(idx == -1) // means what?
    //     {
    //         // cout << "not found!" << nl;
    //         int ache = arektaArray.size();
    //         // cout << ache << nl;
    //         if(ache >= a[i]) 
    //         {
    //             // cout << i << nl;
    //             cnt++;
    //             vis[i] = true;
    //         }
    //     }
    //     else 
    //     {
    //         // cout << "OK" << nl;
    //         int ache = arektaArray.size() - idx - 1;
    //         if(ache >= a[i]) 
    //         {
    //             // cout << i << " -> " << idx << nl;
    //             cnt++;
    //             vis[i] = true;
    //         }
    //     }
    // }
    
    for (int i = 1, j = n-1; i < n; i++, j--) // n-1 ***
    {
        if(vis[j]) continue;

        vector<int> arektaArray(a.begin(), a.end() - i);
        sort(all(arektaArray));
        // print(arektaArray);

        int target = a[j];
        int hi = arektaArray.size()-1, lo = 0, idx = -1;
        while (lo <= hi)
        {
            int mid = lo + (hi-lo)/2;
            if(arektaArray[mid] > target)
            {
                idx = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

        // cout << target << " -> ";

        if(idx == -1) // means what?
        {
            // cout << "not found!" << nl;
            int ache = arektaArray.size();
            // cout << ache << nl;
            if(ache >= a[j]) 
            {
                cout << j << nl;
                cnt++;
                vis[j] = true;
            }
        }
        else 
        {
            // cout << "OK" << nl;
            int ache = arektaArray.size() - idx - 1;
            if(ache >= a[j]) 
            {
                cout << j << " -> " << idx << nl;
                cnt++;
                vis[j] = true;
            }
        }
    }
    
    cout << cnt << nl;

    return 0;
}
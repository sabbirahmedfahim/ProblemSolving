#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/* 
EXplanatiON:
input: 
5 3
1 2 4 8 9
Solution:
low = 1, high = 8
    --------------------
    | Low | High | Mid |
    --------------------
    |  1  |   8  |   4 |
    |  1  |   3  |   2 |
    |  2  |   3  |   2 |
    |  3  |   3  |   3 |
    |  4  |   3  |   X |
    | low > high |break|
    --------------------

*/
bool canWePlace(vector<int> &stalls, int dis, int cows) 
{
    // dis -> minimum distance  
    int cntCows = 1; // the first cow will always go at the first index
    int cur_lastCow = stalls[0]; 
    for (int i = 1; i < stalls.size(); i++) 
    {
        if (stalls[i] - cur_lastCow >= dis) 
        {
            cntCows++;
            cur_lastCow = stalls[i];
        }
        if (cntCows == cows) return true; // this means we're able place cows by maintaining a minimum distance
    }
    return false; // out of bound hoile kicu korar nai :D
}
int aggressiveCows(vector<int> &stalls, int cows) 
{
    sort(all(stalls)); // at first sort the array for the bs operation
    int low = 1; // minimum possible distance [THINK]
    int high = stalls.back() - stalls[0]; // maximum possible distance
    // note that 'low', 'high' are not indices, they are values ***

    // low > high means trying to place cows out of the bound(array)
    while (low <= high) // O(NlogN)
    {
        int mid = (low + high) / 2;
        if (canWePlace(stalls, mid, cows)) low = mid + 1;
        else high = mid - 1;
    }
    return high;
}
// int aggressiveCows(vector<int> &stalls, int cows) // naive approach ***
// { 
//     sort(all(stalls)); // at first sort the array for the bs operation
//     int maxDist = 0;
//     for (int i = 0; i < stalls.size()-1; i++) // O(n³)
//     {
//         for (int j = i+1; j < stalls.size(); j++)
//         {
//             if(canWePlace(stalls, stalls[j] - stalls[i], cows)) maxDist = max(maxDist, stalls[j] - stalls[i]);
//             // else return maxDist; // eta likhle wrong answer ashbe
//         }
//     }
//     return maxDist;
// }
void solve()
{
    int n, cows; cin >> n >> cows; // 2 <= c <= n
    vector<int> stalls(n); for(auto &data : stalls) cin >> data;
    cout << aggressiveCows(stalls, cows) << nl; // minimum distance
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}

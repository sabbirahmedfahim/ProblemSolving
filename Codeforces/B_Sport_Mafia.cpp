// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll tot_moves, k_remaining; cin >> tot_moves >> k_remaining;
 
    ll l = 0, r = tot_moves, mid, put_candies_in_the_box = -1; // r = tot_moves because moves... you know....
    while (l <= r)
    {
        mid = l + (r-l)/2;
        ll sum_of_uknowwhat = (mid * (mid+1))/2; 
        ll target = sum_of_uknowwhat - (tot_moves-mid); // equation is obtained from the editorial
        if(target == k_remaining)
        {
            put_candies_in_the_box = mid;
            break;
        }
        // else if(target > k_remaining) l = mid + 1; // irony
        else if(target > k_remaining) r = mid - 1;
        else l = mid + 1;
    }
    
    // cout << put_candies_in_the_box << nl;
    cout << tot_moves - put_candies_in_the_box << nl; // eaten candies

    return 0;
}
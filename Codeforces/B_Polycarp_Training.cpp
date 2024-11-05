#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int n; cin >> n;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data; 
        ml.insert(data);
    }
    
    int cnt = 0;
    for (int i = 0; i < n && !ml.empty(); i++)
    {
        auto it = ml.lower_bound(i+1); // i+1 illustrates problems
        if(it != ml.end()) 
        {
            cnt++; ml.erase(it);
        }
        else break;
    }

    cout << cnt << nl;

    return 0;
}
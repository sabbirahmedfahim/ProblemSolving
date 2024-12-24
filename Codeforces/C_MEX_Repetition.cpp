#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

void solve()
{
    ll n,k; cin>>n>>k;
    deque<int> dq; 
    map<int, bool> mp;
    
    for(int i=0;i<n;i++)
    {
        int data; cin >> data;
        dq.push_back(data);
        mp[data] = true;
    }

    int mex = -1;
    for (int i = 0; i <= n; i++) // 0-n er maje jei value ta missing sheta ber kortesi
    {
        if(mp[i] == false)
        {
            mex = i; break;
        }
    }
    
    k = k%(n+1); // rotation fixed
    for(int i=0;i<k;i++)
    {
        int tmp = dq.back();
        dq.pop_back();
        dq.push_front(mex);
        mex = tmp; // update mex because pop-ed value is currently the mex! EASY
    }
    print(dq);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}


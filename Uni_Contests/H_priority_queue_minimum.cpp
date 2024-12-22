#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    priority_queue<ll, vector<ll>, greater<> >  minHeap;
    while (t--)
    {
        string cmd; cin >> cmd;
        if(cmd == "push") 
        {
            ll data; cin >> data; minHeap.push(data);
        }
        else if(cmd == "top") 
        {
            if(!minHeap.empty()) cout << minHeap.top() << nl;
        }
        else 
        {
            if(!minHeap.empty()) minHeap.pop();
        }
    }
    

    return 0;
}
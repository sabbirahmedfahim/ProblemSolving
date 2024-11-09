#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    deque<pair<int,int>> dq(n);
    priority_queue<int> MaxHeap;
    priority_queue<int, vector<int>, greater<int>> MinHeap;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        dq[i] = {data, i};
        MaxHeap.push(data);
        MinHeap.push(data);
    }
    int x = -1, y = -1;
    for (int i = 0; i < n && !dq.empty(); i++)
    {
        if(MinHeap.top() == dq.front().first) 
        {
            dq.pop_front(); MinHeap.pop();
        }
        if(MaxHeap.top() == dq.front().first && !dq.empty())
        {
            dq.pop_front(); MaxHeap.pop();
        }

        if(MaxHeap.top() == dq.back().first && !dq.empty())
        {
            dq.pop_back(); MaxHeap.pop();
        }
        if(MinHeap.top() == dq.back().first && !dq.empty()) 
        {
            dq.pop_back(); MinHeap.pop();
        }
    }

    if(dq.empty()) cout << -1 << nl;
    else cout << dq.front().second + 1 << " " << dq.back().second + 1 << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
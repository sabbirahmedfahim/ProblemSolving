#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int cs = 1;
void solve()
{
    cout << "Case " << cs++ << ":" << nl;
    int n, m; cin >> n >> m;
    deque<int> dq;
    while (m--)
    {
        string cmd; cin >> cmd;
        if(cmd == "pushLeft")
        {
            int data; cin >> data;
            if(dq.size() < n) 
            {
                dq.push_front(data); cout << "Pushed in left: " << data << nl;
            }
            else cout << "The queue is full" << nl;
        }
        else if(cmd == "pushRight")
        {
            int data; cin >> data;
            if(dq.size() < n) 
            {
                dq.push_back(data); cout << "Pushed in right: " << data << nl;
            }
            else cout << "The queue is full" << nl;
        }
        else if(cmd == "popLeft")
        {
            if(dq.empty()) cout << "The queue is empty" << nl;
            else 
            {
                cout << "Popped from left: " << dq.front() << nl;
                dq.pop_front();
            }
        }
        else if(cmd == "popRight")
        {
            if(dq.empty()) cout << "The queue is empty" << nl;
            else 
            {
                cout << "Popped from right: " << dq.back() << nl;
                dq.pop_back();
            }
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
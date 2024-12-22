#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; 
    int x; cin >> x; deque<int> a;
    for (int i = 0; i < x; i++) 
    {
        int data; cin >> data; a.push_front(data);
    }
    int y; cin >> y; deque<int> b;
    for (int i = 0; i < y; i++) 
    {
        int data; cin >> data; b.push_front(data);
    }
    // print(a); print(b);
    int cnt = 0;
    while (!a.empty() && !b.empty())
    {
        if(cnt >= 500) 
        {
            cout << -1 << nl; return 0;
        }
        if(a.back() < b.back())
        {
            int tmp = b.back(); b.pop_back();
            b.push_front(a.back());
            b.push_front(tmp);
            a.pop_back();
        }
        else 
        {
            int tmp = a.back(); a.pop_back();
            a.push_front(b.back());
            a.push_front(tmp);
            b.pop_back();
        }
        cnt++;
    }
    cout << cnt << " ";
    if(a.empty()) cout << 2 << nl;
    else cout << 1 << nl;

    return 0;
}
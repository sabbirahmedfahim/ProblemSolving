#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int cs = 1;
void solve()
{
    cout << "Case " <<  cs++ << ":" << nl;
    string cmd;
    stack<string> backward, forward;
    forward.push("http://www.lightoj.com/");
    while (1)
    {
        cin >> cmd;
        if(cmd == "BACK") // OK
        {
            if(backward.empty()) cout << "Ignored" << nl;
            else 
            {
                forward.push(backward.top()); backward.pop();
                cout << forward.top() << nl; 
            }
        }
        else if(cmd == "FORWARD") // ???
        {
            if(forward.size() < 2) cout << "Ignored" << nl;
            else
            {
                backward.push(forward.top()); forward.pop();
                cout << forward.top() << nl;
            }
        }
        else if(cmd == "VISIT") // OK
        {
            string url; cin >> url;
            backward.push(forward.top());
            while (!forward.empty())
            {
                forward.pop();
            }
            forward.push(url);
            cout << url << nl;
        }
        else break;
    }
}
int main()
{
    iOS

    int t; cin >> t;
    while (t--) solve(); 

    return 0;
}
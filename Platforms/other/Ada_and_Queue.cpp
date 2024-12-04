#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int q; cin >> q;
    list<int> l;
    bool is_reversed = false;
    while (q--)
    {
        string s; cin >> s; // will remove it
        if(s == "toFront") // push front
        {
            int data; cin >> data; 
            if(is_reversed) l.push_back(data);
            else l.push_front(data);
        }
        else if(s == "push_back") // push back
        {
            int data; cin >> data; 
            if(is_reversed) l.push_front(data);
            else l.push_back(data);
        }
        else if(s == "front") // print front data then erase it
        {
            if(!l.empty()) 
            {
                if(is_reversed) 
                {
                    cout << l.back() << nl; l.pop_back();
                }
                else 
                {
                    cout << l.front() << nl; l.pop_front();
                }
            }
            else cout << "No job for Ada?" << nl;
        }
        else if(s == "back") // print back then erase it
        {
            if(!l.empty()) 
            {
                if(is_reversed) 
                {
                    cout << l.front() << nl; l.pop_front();
                }
                else 
                {
                    cout << l.back() << nl; l.pop_back();
                }
            }
            else cout << "No job for Ada?" << nl;
        }
        else  // lol How to reverse?
        {
            is_reversed = !is_reversed;
        }
    }
    

    return 0;
}
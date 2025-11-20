#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    // cout << n << " " << s << nl;

    set<string> st;
    // Len - 1
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        string x; x.push_back(ch);
        st.insert(x);
    }
    for (int i = 0; i < n; i++)
    {
        string x; x.push_back(s[i]);
        if(st.count(x)) st.erase(x);
    }
    string res;
    for(auto e : st)
    {
        if(res.empty()) res += e;
    }
    if(!res.empty())
    {
        cout << res << nl;
        return;
    }

    // Len - 2
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (char ch2 = 'a'; ch2 <= 'z'; ch2++)
        {
            string data1, data2;
            data1.push_back(ch); data1.push_back(ch2);
            data2.push_back(ch2); data2.push_back(ch);
            st.insert(data1);
            st.insert(data2);
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        string x = s.substr(i, 2);
        if(st.count(x)) st.erase(x);
    }
    for(auto e : st)
    {
        if(res.empty()) res += e;
    }
    if(!res.empty())
    {
        cout << res << nl;
        return;
    }

    // Len - 3
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (char ch2 = 'a'; ch2 <= 'z'; ch2++)
        {
            for (char ch3 = 'a'; ch3 < 'z'; ch3++)
            {
               string one, two, three, four, five, six;

               /*
               1 2 3
               1 3 2
               2 1 3
               2 3 1
               3 1 2
               3 2 1
               */
               
               one.push_back(ch); one.push_back(ch2); one.push_back(ch3);
               two.push_back(ch); two.push_back(ch3); two.push_back(ch2);
               three.push_back(ch2); three.push_back(ch); three.push_back(ch3);
               four.push_back(ch2); four.push_back(ch3); four.push_back(ch);
               five.push_back(ch3); five.push_back(ch); five.push_back(ch2);
               six.push_back(ch3); six.push_back(ch2); six.push_back(ch);
               st.insert(one);
               st.insert(two);
               st.insert(three);
               st.insert(four);
               st.insert(five);
               st.insert(six);
            }
        }
    }

    // cout << st.size() << nl;


    
    for (int i = 0; i < n - 2; i++)
    {
        string x = s.substr(i, 3);
        if(st.count(x)) st.erase(x);
    }

    for(auto e : st)
    {
        if(res.empty()) res += e;
    }
    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
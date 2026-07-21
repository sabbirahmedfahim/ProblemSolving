#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; 

    set<int> st;
    for (int i = 1; i <= n + n; i++)
    {
        st.insert(i);
    }
    
    map<int, pair<int, int>> mp;
    vector<int> numbers;
    for (int i = 2; i <= n + n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            int data; cin >> data;
            mp[data] = {j, i};
            numbers.push_back(data);
        }
    }
    
    sort(all(numbers)); reverse(all(numbers));

    deque<int> ans(2 * n + 1);
    for(auto e : numbers)
    {
        pair<int, int> who = mp[e];

        if(st.count(who.first) && st.count(who.second))
        {
            // cerr << who.first << " : " << who.second << nl;
            ans[who.first] = who.second; ans[who.second] = who.first;
            st.erase(who.first); st.erase(who.second);

            // print(ans);
        }
    }

    ans.pop_front();
    print(ans);

    return 0;
}
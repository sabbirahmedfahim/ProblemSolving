// took hints from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int fact(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; string s; cin >> n >> s;

    vector<int> ans;

    for (int N = 0; N < n; N++)
    {
        int x = s[N] - '0';
        if(x == 1 || x == 0) continue;

        int toFact = fact(x);

        multiset<int> st;
        st.insert(x);
        // cout << *st.begin() << nl;

        for (int i = 2; i < x; i++)
        {
            for (int j = 2; j < x; j++)
            {
                int curr = fact(i) * fact(j);
                if(curr == toFact) 
                {
                    string s = "";
                    s.push_back(i + '0'); s.push_back(j + '0');
                    sort(all(s)); reverse(all(s));
                    st.insert(stoll(s));
                }
                for (int k = 2; k < x; k++)
                {
                    curr = fact(i) * fact(j) * fact(k);
                    if(curr == toFact) 
                    {
                        string s = "";
                        s.push_back(i + '0'); s.push_back(j + '0'); s.push_back(k + '0');
                        sort(all(s)); reverse(all(s));
                        st.insert(stoll(s));
                    }
                    for (int l = 2; l < x; l++)
                    {
                        curr = fact(i) * fact(j) * fact(k) * fact(l);
                        if(curr == toFact) 
                        {
                            string s = "";
                            s.push_back(i + '0'); s.push_back(j + '0'); 
                            s.push_back(k + '0'); s.push_back(l + '0');
                            sort(all(s)); reverse(all(s));
                            st.insert(stoll(s));
                        }
                    }
                }
            }
        }
        int take = *prev(st.end());
        // cerr << take << nl;

        while (take)
        {
            ans.push_back(take % 10);
            take /= 10;
        }
    }
    
    sort(all(ans)); reverse(all(ans));

    // print(ans);
    for(auto e : ans) cout << e;
    cout << nl;

    return 0;
}
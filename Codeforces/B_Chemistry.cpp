// alhamdulillah, understand even, odd relation and imagined the base of the problem is freqeuency array
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k; string s;
        cin >> n >> k >> s;
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i]-'a']++;
        }
        bool flag = true;
        // for (int i = 0; i < 26; i++)
        // {
        //     if(freq[i] > 0) cout << char(i+'a') << ": " << freq[i] << nl;
        // }
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if(freq[i] > 0 && n%2 == 0)
            {
                if(freq[i]%2 != 0 && k > 0)
                {
                    k--;
                } 
                else if(freq[i]%2 != 0 && cnt == 0)
                {
                    cnt++;
                }
                else if(freq[i]%2 != 0 && cnt == 1)
                {
                    flag = false;
                    break;
                }
            }
            else if(freq[i] > 0)
            {
                if(freq[i]%2 != 0 && cnt == 1 && k > 0)
                {
                    k--;
                } 
                else if(freq[i]%2 != 0) 
                {
                    cnt++;
                    if(cnt == 2)
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}
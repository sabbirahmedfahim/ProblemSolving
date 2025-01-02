// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin>>n;
    vector <string> v(n);
    for(auto &data : v) cin>> data ;
    map <string,int> substr_freq;
    for(auto phoneNumber : v)
    {
        set <string> uniqueSubstr;
        for(int i=0; i<phoneNumber.size(); i++)
        {
            for(int j=i+1; j<=phoneNumber.size(); j++)
            {
                string subStringPortion = phoneNumber.substr(i,j-i);
                if(uniqueSubstr.find(subStringPortion) == uniqueSubstr.end())
                {
                    uniqueSubstr.insert(subStringPortion);
                    substr_freq[subStringPortion]++;
                }
            }
        }
    }
    // for(auto [key, val] : substr_freq) cout << key << " " << val << nl;
    // cout << nl;
    for(auto phoneNumber : v)
    {
        string ans="";
        bool isFound = false;
        for(int i=0; i<phoneNumber.size(); i++)
        {
            for(int j=i+1; j<=phoneNumber.size(); j++)
            {
                string subStringPortion = phoneNumber.substr(i,j-i);

                if(substr_freq[subStringPortion] > 1) continue; // 1 er beshi hole tho bhai search korle multiple number show korbe
                if(isFound == false || subStringPortion.size() < ans.size())
                {
                    ans = subStringPortion;
                    isFound = true;
                    if(ans.size() == 1) break;
                }
            }
        }
        cout << ans << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    string s1, s2; cin >> s1 >> s2;
    int pos1 = 0, neg1 = 0, pos2 = 0, neg2 = 0, questionMArk = 0;
    for(auto data : s1) (data == '+')? pos1++ : neg1++;
    for(auto data : s2) 
    {
        if(data == '+') pos2++;
        else if(data == '-') neg2++;
        else questionMArk++;
    }
    if(pos1 < pos2 || neg1 < neg2)
    {
        cout << fixed << setprecision(12);
        cout << (float) 0;
    }
    else 
    {
        if(pos1 == pos2 && neg1 == neg2) 
        {
            cout << fixed << setprecision(12);
            cout << (float) 1;
        }
        else
        {
            cout << fixed << setprecision(12);
            cout << (float) 1;
        }
    }
}
void solve2()
{
    string s1, s2; cin >> s1 >> s2;
    int sum1 = 0, sum2 = 0, questionMArk = 0;
    for(auto data : s1) (data == '+')? sum1++ : sum1--;
    for(auto data : s2) 
    {
        if(data == '+') sum2++;
        else if(data == '-') sum2--;
        else questionMArk++;
    }
    float cntAc = 0, cntWA = 0;
    for (int mask = 0; mask < (1<<questionMArk); mask++)
    {
        int s = 0;
        for (int k = 0; k < questionMArk; k++)
        {
            if((mask >> k) & 1) s++;
            else s--;
        }
        if(sum1 == (sum2+s)) cntAc++;
        else cntWA++;
    }

    if(cntAc == 0)
    {
        cout << fixed << setprecision(12);
        cout << (float) 0;
    }
    else if(cntWA == 0 && cntAc) 
    {
        cout << fixed << setprecision(12);
        cout << (float) 1;
    }
    else
    {
        // 1*x/(x+y)
        cout << fixed << setprecision(12);
        cout << (float) 1*cntAc/(cntAc+cntWA);
    }
    // cout << cntAc << " " << cntWA << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // solve();
    solve2();

    return 0;
}
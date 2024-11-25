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

    int n; cin >> n;
    vector<int> luckyList;
    for (int i = 1; i <= 1000; i++)
    {
        bool isLucky = true; int num = i;
        while (num != 0)
        {
            if(num%10 != 4 && num%10 != 7)
            {
                isLucky = !isLucky;
                num = 0;
            }
            num /= 10;
        }
        if(isLucky) luckyList.push_back(i);
    }
    
    // print(luckyList);
    bool isLucky = false;
    for(auto data : luckyList)
    {
        if(n%data == 0) 
        {
            isLucky = !isLucky; break;
        }
    }
    cout << ((isLucky)? "YES" : "NO") << nl;

    return 0;
}
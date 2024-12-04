#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int stringToInt(string x)
{
    int target = 0;
    for(auto data : x)
    {
        target = target * 10 + (data - '0');
    }
    return target;
}
int main()
{
    iOS

    string s; cin >> s;
    string a, b;
    bool isLeft = true;
    char op;
    for(auto data : s)
    {
        if(data == '+' || data == '-' || data == '*' || data == '/') 
        {
            isLeft = !isLeft; op = data;
        }
        else if(isLeft) a += data;
        else b += data;
    }
    if(op == '+') cout << stringToInt(a) + stringToInt(b) << nl;
    else if(op == '-') cout << stringToInt(a) - stringToInt(b) << nl;
    else if(op == '*') cout << stringToInt(a) * stringToInt(b) << nl;
    else cout << stringToInt(a) / stringToInt(b) << nl;
    


    return 0;
}
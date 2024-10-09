#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void emblemTheMember(ll data)
{
    if(data > 0 && data <= 1199) cout << "newbie" << nl;
    else if(data > 1199 && data <= 1399) cout << "pupil" << nl;
    else if(data > 1399 && data <= 1599) cout << "specialist" << nl;
    else if(data > 1599 && data <= 1899) cout << "expert" << nl;
    else if(data > 1899 && data <= 2099) cout << "candidate master" << nl;
    else if(data > 2099 && data <= 2399) cout << "master" << nl;
    else cout << "grandmaster" << nl;
    
}
int main()
{
    string s; ll current, max, lastDelta;
    cin >> s >> current >> max >> lastDelta;
    current += lastDelta;
    if(max == 0 && current > 0) emblemTheMember(current);
    else if(max <= 1199 && current > 1199) emblemTheMember(current);
    else if(max <= 1399 && current > 1399) emblemTheMember(current);
    else if(max <= 1599 && current > 1599) emblemTheMember(current);
    else if(max <= 1899 && current > 1899) emblemTheMember(current);
    else if(max <= 2099 && current > 2099) emblemTheMember(current);
    else if(max <= 2399 && current > 2399) emblemTheMember(current);
    else cout << "Think about it, you can do it!" << nl;
    

    return 0;
}
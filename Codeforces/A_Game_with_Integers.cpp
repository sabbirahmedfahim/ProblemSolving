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
        int n; cin >> n;
        int cntMoves = 0;
        bool flag = true;
        bool turnOfVanya = true;
        while (true)
        {
            if(cntMoves > 10) 
            {
                flag = false; break;
            }
            if(turnOfVanya)
            {
                if(n%3==0) break;
                else if(n+2%3==0) n++;
                else if(n-2%3==0 || n+1%3==0) n--;
                else n++;
                turnOfVanya = !turnOfVanya;
            }
            else if (!turnOfVanya)
            {
                if(n%3==0) 
                {
                    flag = false; break;
                }
                if(n+2%3==0) n++;
                else if(n-2%3==0 || n+1%3==0) n--;
                else n++;
            }
            cntMoves++;
        }
        if(!flag) cout << "First" << nl;
        else cout << "Second" << nl;
    }
    

    return 0;
}
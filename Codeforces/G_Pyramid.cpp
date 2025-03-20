#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void starPrint(int x)
{
    if(x <= 0) return;
    cout << "*";
    starPrint(x-1);
}
void spacePrint(int y)
{
    if(y <= 0) return;
    cout << " ";
    spacePrint(y-1);
}
void Pyramid(int n, int l, int r, int spaceCnt)
{
    if(n == 0) return;

    spacePrint(spaceCnt);
    starPrint(l);
    starPrint(1);
    starPrint(r);
    cout << nl;
    
    Pyramid(n-1, l+1, r+1, spaceCnt-1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int spaceCnt = n - 1;
    int l = 0, r = 0;
    Pyramid(n, l, r, spaceCnt);

    return 0;
}
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
000

A 010 +1
B 110 +1
A 011 +0
B 111 +1
A => 1
B => 2

000000000

000010000 A +1
000011000 B +1
000011000 A +0
000111000 B +1
001111000 A +1
001111000 B +0
001111100 A +1
011111100 B +1
011111100 A +0
011111110 B +1
111111110 A +1
111111110 B +0
111111111 A +1
A => 5
B => 4

0000000 ALice

0001000 A +1
0011000 B +1
0011000 A +0
0011100 B +1
0111100 A +1
0111100 B +0
0111110 A +1
1111110 B +1
1111110 A +0
1111111 B +1
A => 3
B => 4

00000 Alice

00100 A +1
01100 B +1
01100 A +0
01110 B +1
11110 A +1
11110 B +0
11111 A +1
A => 3
B => 2

00000000000 => 11 DRAW

00000100000 A +1
00001100000 B +1
00001100000 A +0
00001110000 B +1
00001111000 A +1
00001111000 B +0
00011111000 A +1
00111111000 B +1
00111111000 A +0
00111111100 B +0
01111111100 A +1
01111111100 B +0
01111111110 A +1
11111111110 B +1
11111111110 A +0
11111111111 B +1

A => 5
B => 5
*/
void solve()
{
    int n; string s; cin >> n >> s;

    int one = count(all(s), '1');
    
    // i guess the only edge case => NO
    if(one == 0 && (n == 3 || n == 5 || n == 7))
    {
        cout << "ALICE" << nl; return;
    }


    if(n == one) cout << "DRAW" << nl;
    else cout << "BOB" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
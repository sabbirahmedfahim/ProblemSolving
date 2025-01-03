#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Observation: 
We need to find how many Xi exist such that the number of differing bits between Xi 
and Fedor's value is at-most k. [at-most means at-most :) ] 

Process: Among the m numbers, at most k bits can be different from Fedor's bits. 
We can do this using bitwise XOR. Then, we can loop through the bits to count, 
or use the __builtin_popcount() function, though the loop's complexity is also minimal.

Here, it mentions (m+1), and it is clearly stated that the (m+1)th value is Fedor's value.
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, k; cin >> n >> m >> k; vector<int> x(m); for(auto &data : x) cin >> data;
    int fedor; cin >> fedor;
    int ans = 0;

    for(auto data : x)
    {
        int diff = data ^ fedor; // xor dile omil portion gulu te 1 ashbe, now 1 gulu count korte hobe
        
        // int one = 0; // AC
        // while (diff)
        // {
        //     if(diff & 1) one++;
        //     diff >>= 1;
        // }
        if(__builtin_popcount(diff) <= k) ans++; // pop count function diye ekta value er koyda bit on ache sheta count kora jay
    }
    cout << ans << nl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9; vector<bool> isPrime(N, true);

// using bitset you can solve upto around N = 10^8 in 1s
// const int N = 1E8 + 5; bitset<N> isPrime; // to have O(N/64) memory complexity

void solve() 
{
    int n; cin >> n;

    // isPrime.set(); // sets all bits to true
    isPrime[0] = isPrime[1] = false;

    int cnt = 0;
    for (int i = 2; i * i < N; i++) 
    {
        if (isPrime[i]) 
        {
            cnt++;

            if(cnt == n)
            {
                cout << i << endl; return;
            }
            
            for (int j = i * i; j < N; j += i) 
            {
                isPrime[j] = false;
            }
        }
    }
}
int main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}
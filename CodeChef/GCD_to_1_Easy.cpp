#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

// const int N = 1e7 + 9; vector<bool> isPrime(N, true);

// using bitset you can solve upto around N = 10^8 in 1s
const int N = 1E8 + 5; bitset<N> isPrime; // to have O(N/64) memory complexity
int cnt = 0;
vector<int> primes;
void sieve() 
{
    isPrime.set(); // sets all bits to true
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < N; i++) 
    {
        if (isPrime[i]) 
        {
            for (int j = i * i; j < N; j += i) 
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < N; i++)
    {
        if(isPrime[i]) primes.push_back(i);
        if(primes.size() > 3E5) break;
    }
}
void solve()
{
    vector<int> tmp = primes;

    int row, col; cin >> row >> col;
    int mat[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = tmp.back(), tmp.pop_back();
        }
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << nl;
    }
}
int main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    sieve();

    int t; cin >> t; 
    for (int i = 1; i <= t; i++)
    {
        // cout << i << nl;
        solve();
    }
    

}
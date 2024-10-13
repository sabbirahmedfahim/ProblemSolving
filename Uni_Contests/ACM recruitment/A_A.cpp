// wrong approach
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void sieveOfEratosthenes(int n, bool isPrime[]) {
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
int main()
{
    int mat[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mat[i][j] = 0;
        }
    }
    int n = 100;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mat[i][j] = n;
            n--;
        }
    }
    n = 90;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 9; j < 10; j++)
        {
            mat[i][j] = n;
            n--;
        }
    }
    n = 65;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            mat[i][j] = n;
            n++;
        }
    }
    n = 64;
    for (int i = 1; i < 2; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            mat[i][j] = n;
            n--;
        }
    }
    n = 37;
    for (int i = 2; i < 3; i++)
    {
        for (int j = 1; j < 8; j++)
        {
            mat[i][j] = n;
            n--;
        }
    }
    n = 17;
    for (int i = 3; i < 4; i++)
    {
        for (int j = 2; j < 7; j++)
        {
            mat[i][j] = n;
            n--;
        }
    }
    n = 5;
    for (int i = 4; i < 5; i++)
    {
        for (int j = 3; j < 6; j++)
        {
            mat[i][j] = n;
            n--;
        }
    }
    mat[5][4] = 1;
    n = 38;
    for (int i = 3; i < 9; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            mat[i][j] = n;
            n++;
        }
    }
    n = 74;
    for (int i = 9; i < 10; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            mat[i][j] = n;
            n++;
        }
    }
    n = 44;
    for (int i = 8; i < 9; i++)
    {
        for (int j = 2; j < 9; j++)
        {
            mat[i][j] = n;
            n++;
        }
    }
    n = 56;
    for (int i = 2; i < 9; i++)
    {
        for (int j = 8; j < 9; j++)
        {
            mat[i][j] = n;
            n--;
        }
    }
    n = 21;
    for (int i = 7; i < 8; i++)
    {
        for (int j = 2; j < 8; j++)
        {
            mat[i][j] = n;
            n++;
        }
    }
    n = 18;
    for (int i = 4; i < 7; i++)
    {
        for (int j = 2; j < 3; j++)
        {
            mat[i][j] = n;
            n++;
        }
    }
    mat[6][3] = 7;
    mat[6][4] = 8;
    mat[6][5] = 9;
    mat[6][6] = 10;
    mat[6][7] = 27;
    mat[5][3] = 6;
    mat[5][5] = 2;
    mat[5][6] = 11;
    mat[5][7] = 28;
    mat[4][6] = 12;
    mat[4][7] = 29;
    mat[3][7] = 30;


    // print
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << nl;
    // }
    int n = 100;
    bool isPrime[n + 1];
    sieveOfEratosthenes(n, isPrime);
    
    int src, des; cin >> src >> des;

    return 0;
}

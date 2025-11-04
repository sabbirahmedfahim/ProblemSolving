#include <stdio.h>
/*
1-1E9 int
1-1E18 long long
*/
void solve()
{
    long long n; scanf("%lld", &n);

    if(n % 2 != 0)
    {
        printf("YES\n");
    }
    else // even
    {
        while (n > 1)
        {
            n = n / 2;

            if(n % 2 != 0) break;
        }
        /*
        8 -> 4 -> 2 -> 1
        */
        
        if(n == 1) printf("NO\n");
        else printf("YES\n");
    }
}
int main() 
{
    int t; scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        solve();
    }

  return 0;
}
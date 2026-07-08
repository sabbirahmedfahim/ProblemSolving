#include <bits/stdc++.h>
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
vector<int> primeFactors;
string ask(int x)
{
    cout << x << nl;
    string jobab; cin >> jobab;

    return jobab;
} 
void preCalc()
{
    int n = 50;
    set<int> pf;
    for (int i = 2; i <= n; i++)
    {
        int data = i;
        for (int j = 2; j * j <= data; j++)
        {
            while (data % j == 0)
            {
                pf.insert(j); 
                data /= j;
            }
        }
        if(data > 1) pf.insert(data);
    }
    for(auto e : pf) primeFactors.push_back(e);
    // cout << primeFactors.size() << nl;
    // print(primeFactors);
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    preCalc();

    for (int i = 0; i < 4; i++)
    {
        if(ask(primeFactors[i] * primeFactors[i]) == "yes")
        {
            cout << "composite" << nl; return 0;
        }
    }
    
    int cnt = 0;

    for(auto e : primeFactors)
    {
        if(ask(e) == "yes") cnt++;
    }

    if(cnt <= 1) cout << "prime" << nl;
    else cout << "composite" << nl;

    return 0;
}
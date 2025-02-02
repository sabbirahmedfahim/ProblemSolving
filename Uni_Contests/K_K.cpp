#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 1E6;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    bool comp[N+1] = {0};
    for (int i = 2; i <= N; i++)
    {
        if(comp[i]) continue;
        
        for (int j = i+i; j <= N; j+=i)
        {
            comp[j] = true;
        }
    }
    comp[1] = true;

    // pre-calculate
    vector<int> primeNumbers;
    for (int i = 2; i <= N; i++)
    {
        if(!comp[i] && !comp[(i+1)/2]) primeNumbers.push_back(i);
    }
    
    int queries; cin >> queries; 
    while (queries--)
    {
        int x, y, cnt = 0; cin >> x >> y;
        for(auto data : primeNumbers)
        {
            if(data >= x && data <= y) cnt++;
        }
        cout << cnt << nl;
    }

    return 0;
}
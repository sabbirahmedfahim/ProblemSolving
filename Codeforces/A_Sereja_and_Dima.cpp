#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int n; cin >> n;
    deque<int>dq(n);
    input(dq);
    long long int sereja_score = 0, dima_score = 0;
    bool serejaTurn = true;
    while(!dq.empty())
    {
        if(dq.front() > dq.back())
        {
            if(serejaTurn) sereja_score += dq.front();
            else dima_score += dq.front();
            dq.pop_front();
        }
        else
        {
            if(serejaTurn) sereja_score += dq.back();
            else dima_score += dq.back();
            dq.pop_back();
        }
        serejaTurn = !serejaTurn;
     }
     cout << sereja_score << " " << dima_score;
    

    return 0;
}
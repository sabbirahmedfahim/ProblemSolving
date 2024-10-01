#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    int four = 0;
    int three = 0;
    int one = 0;
    int two = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 4) four++;
        else if(arr[i] == 3) three++;
        else if(arr[i] == 2) two++;
        else one++;
    }
    int extraSpaceFor_1_from_3 = (three*4) - (three*3);
    int extraSpaceFor_1_from_2;
    if(two%2 == 0) 
    {
        extraSpaceFor_1_from_2 = 0;
        two/=2;
    }
    else 
    {
        extraSpaceFor_1_from_2 = 2;
        if(two != 1) two = (two/2)+1;
    }
    int totalSpaceFor_1 = extraSpaceFor_1_from_2 + extraSpaceFor_1_from_3;
    int due_1 = one - totalSpaceFor_1;

    if(totalSpaceFor_1 - one >= 0) cout << four+three+two << nl;
    else 
    {
        if(due_1%4 != 0) cout << four+three+two+(due_1/4)+1 << nl;
        else cout << four+three+two+(due_1/4) << nl;
    }

    return 0;
}
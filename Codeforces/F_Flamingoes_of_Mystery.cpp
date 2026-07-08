#include <bits/stdc++.h>
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int ask(int l, int r)
{
    cout << "? " << l << " " << r << nl;
    int responseFromOj; cin >> responseFromOj;

    return responseFromOj;
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n + 1);

    int x = ask(1, 2), y = ask(1, 3), z = ask(2, 3);

    a[3] = y - x;
    a[2] = z - a[3];
    a[1] = y - (a[2] + a[3]);

    for (int i = 3; i <= n - 1; i++)
    {
        int data = ask(i, i + 1);
        a[i + 1] = data - a[i];
    }

    cout << "! ";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;

    return 0;
}
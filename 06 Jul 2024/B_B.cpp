#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int countL = 0, countO = 0;
    string items;
    cin >> items;
    for (char ch : items)
    {
        if (ch == 'L')
        {
            countL++;
        }
        else if (ch == 'O')
        {
            countO++;
        }
    }

    char firstCh = items[0];
    char lastCh = items.back();

    if (firstCh == lastCh)
        cout << "-1" << endl;
    else if (countL >= countO && countO % 2 != 0)
    {
        cout << countO << endl;
    }
    else if (countO >= countL && countL % 2 != 0)
    {
        cout << countL << endl;
    }
    else
        cout << "-1" << endl;

    return 0;
}
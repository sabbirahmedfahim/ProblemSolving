#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string stone;
        cin >> stone;
        for (int i = 0; i < stone.size(); i++)
        {
            switch (stone[i])
            {
            case '1':
                count += 1;
                break;
            case '2':
                count += 2;
                break;
            case '3':
                count += 3;
                break;
            case '4':
                count += 4;
                break;
            case '5':
                count += 5;
                break;
            case '6':
                count += 6;
                break;
            case '7':
                count += 7;
                break;
            case '8':
                count += 8;
                break;
            case '9':
                count += 9;
                break;

            default:
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}
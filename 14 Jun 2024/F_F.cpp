#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int count_upper = 0;
    int count_lower = 0;
    int min_alpha = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            count_upper++;
        }
        if (islower(s[i]))
        {
            count_lower++;
        }
        if (count_upper>count_lower)
        {
            min_alpha = count_lower;
        }
        else min_alpha = count_upper;
        
        if (isupper(s[i]) && islower(s[i + 1]))
        {
            count++;
        }
    }

    cout << min_alpha <<endl;
    cout << count <<endl;
    cout<< min_alpha - count;

    return 0;
}
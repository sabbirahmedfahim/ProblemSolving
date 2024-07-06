#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string genome;
    cin >> genome;
    int countA = 0, countC = 0, countG = 0, countT = 0;
    for (char ch : genome)
    {
        if (ch == 'A')
            countA++;
        else if (ch == 'C')
            countC++;
        else if (ch == 'G')
            countG++;
        else if (ch == 'T')
            countT++;
    }
    int arr[4] = {countA, countC, countG, countT};
    int maxx = countA;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > maxx)
        {
            maxx = arr[i];
        }
    }

    int oneFourth = n / 4;
    int dueA = oneFourth - countA;
    int dueC = oneFourth - countC;
    int dueG = oneFourth - countG;
    int dueT = oneFourth - countT;

    if (n % 4 == 0 || maxx < oneFourth)
    {
        for (int i = 0; i < n; i++)
        {
            if (dueA != 0 && genome[i] == '?')
            {
                genome[i] = 'A';
                dueA--;
            }
            else if (dueC != 0 && genome[i] == '?')
            {
                genome[i] = 'C';
                dueC--;
            }
            else if (dueG != 0 && genome[i] == '?')
            {
                genome[i] = 'G';
                dueG--;
            }
            else if (dueT != 0 && genome[i] == '?')
            {
                genome[i] = 'T';
                dueT--;
            }
        }
    }
    if (n % 4 != 0 || maxx > oneFourth)
    {
        cout << "===" << endl;
    }
    else
        cout << genome << endl;

    return 0;
}
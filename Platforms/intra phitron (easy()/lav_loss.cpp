#include <bits/stdc++.h>
using namespace std;

int main()
{
    double selling_price, loss_percentage, profit_percentage;
    cin >> selling_price >> loss_percentage >> profit_percentage;
    loss_percentage = 100 - loss_percentage;
    profit_percentage = 100 + profit_percentage;

    double original_price;
    original_price = (100 * selling_price) / loss_percentage;

    double total_price;
    total_price = (original_price * profit_percentage) / 100;

    cout << fixed<< setprecision(2) <<total_price;

    return 0;
}
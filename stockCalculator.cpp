/*
This is a program that takes stocks information that calculates the profit
*/

#include <iostream>
using namespace std;

void stockCalculate() {
    float bought_stock = 0;
    float sell_stock = 0;
    float buy_fee = 0;
    float sell_fee = 0;
    int shares = 0;

    float net_buy_price = 0;
    float net_sell_price = 0;
    float profit = 0;

    cout << "Enter bought stock price > $";
    cin >> bought_stock;

    cout << "Enter number of shares bought > ";
    cin >> shares;

    cout << "Enter selling stock price > $";
    cin >> sell_stock;

    cout << "Enter bought fee > $";
    cin >> buy_fee;

    cout << "Enter sell fee > $";
    cin >> sell_fee;

    net_buy_price = bought_stock * shares + buy_fee;
    net_sell_price = shares * sell_stock - sell_fee;
    profit = net_sell_price - net_buy_price;

    cout << endl;

    cout << "Profit only > " << profit << endl;
}

int main()
{
    stockCalculate();

    return 0;
}
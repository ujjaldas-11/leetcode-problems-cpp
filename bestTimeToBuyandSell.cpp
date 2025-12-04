#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {

    if(prices.size() < 1) return 0;

    int min_price = prices[0];
    int max_profit = 0, max_sell = 0;

    for(int i = 0; i < prices.size(); i++) {
        min_price = min(min_price, prices[i]);
        if(prices[i] < min_price) {
            min_price = prices[i];
        }
        if(prices[i] > max_profit) {
            // cout << prices[i] << endl;
            max_profit = prices[i];
            cout << "max: " << max_profit << endl;
        }
        max_sell = max_profit - min_price;
    }
    if(min_price == prices.end())
    cout <<"smallest: " << min_price << endl;
    cout << "largest: " << max_profit << endl;
    return max_sell;
}


int main() {
    vector<int> prices = {7,5,3,6,4,1};

    cout << maxProfit(prices) << endl;
    return 0;
}
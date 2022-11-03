#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int coinChange(vector<int>& coins, int n) {
    int pInt[++n];
    pInt[0] = 0;
    sort(begin(coins), end(coins));
    for (int i = 1; i < n; i++) {
        pInt[i] = INT_MAX;
        for (int j: coins) {
            if (i - j < 0) break;
            if (pInt[i - j] != INT_MAX) pInt[i] = min(pInt[i], 1 + pInt[i - j]);
        }
    }
    return pInt[--n] == INT_MAX ? -1 : pInt[n];
}

int main(){
    vector<int> coins = {1,2,5};
    int amount = 11;
    cout << coinChange(coins, amount);
}
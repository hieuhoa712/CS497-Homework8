#include <iostream>

using namespace std;

int divide(int num1, int num2) {
    if (num1 == INT_MIN && num2 == -1) {
        return INT_MAX;
    }
    long tempNum = labs(num1), divNum = labs(num2), ans = 0;
    int sign = num1 > 0 ^ num2 > 0 ? -1 : 1;
    while (tempNum >= divNum) {
        long temp = divNum, count = 1;
        while (temp << 1 <= tempNum) {
            temp <<= 1;
            count <<= 1;
        }
        tempNum -= temp;
        ans += count;
    }
    return sign * ans;
}

int main(){
    int dividend = 10, divisor = 3;
    cout << divide(dividend, divisor);
}
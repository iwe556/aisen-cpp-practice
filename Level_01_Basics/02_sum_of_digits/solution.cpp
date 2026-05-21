#include <bits/stdc++.h>
using namespace std;

int sumDigitsOfInteger(int integer) {
    int sum = 0;

    while (integer != 0) {
        int lastDigit = integer % 10; /* Get the last digit of the integer*/
        sum = sum + lastDigit; /*Add the last digit to the sum*/
        integer = integer / 10; /*Remove the last digit*/
    }

    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int input;

    cout << "Input number: " << endl;
    cin >> input;

    cout << "The sum of digits in " << input << " is " << sumDigitsOfInteger(input) << endl;

    return 0;
}

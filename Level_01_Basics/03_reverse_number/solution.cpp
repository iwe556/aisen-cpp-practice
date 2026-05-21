#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int number) {
     int newInt = 0;

    while (number != 0) {
        int lastDigit = number % 10;

        newInt = newInt * 10 + lastDigit;

        number = number / 10;
    }

    return newInt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int input;

    cout << "Input an number(integer): " << endl;
    cin >> input;

    cout << "Reversed number: " << reverseNumber(input);

    return 0;
}

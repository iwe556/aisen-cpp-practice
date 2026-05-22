#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        int number;
        cin >> number;
        actualSum += number;
    }

    int missingNumber = expectedSum - actualSum;

    cout << missingNumber << "\n";

    return 0;
}
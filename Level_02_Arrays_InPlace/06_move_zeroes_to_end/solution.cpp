#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int position = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[position] = arr[i];
            position++;
        }
    }

    while (position < n) {
        arr[position] = 0;
        position++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];

        if (i < n - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}
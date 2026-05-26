#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    k = k % n;
    
    vector<int> rotated;

    for (int i = k; i < n; i++) {
        rotated.push_back(arr[i]);
    }

    for (int i = 0; i < k; i++) {
        rotated.push_back(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << rotated[i] << " ";
    }

    return 0;
}

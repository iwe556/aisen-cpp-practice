#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string text;
    cin >> text;

    vector<char> seen;

    for (int i = 0; i < (int)text.length(); i++) {
        char currChar = text[i];
        auto iterator = find(seen.begin(), seen.end(), currChar);

        if (iterator != seen.end()){
            cout << currChar << '\n';
            return 0;
        } else {
            seen.push_back(currChar);
        }
    }

    cout << -1 << '\n';
    

    return 0;
}

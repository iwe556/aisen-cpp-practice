#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string text;
    cin >> text;

    char currentCharacter;
    int count = 1;

    for (int i = 1; i < text.length(); i++) {
        currentCharacter = text[i];

        if (currentCharacter == text[i - 1]) {
            count = count + 1;
        } else {
            cout << text[i - 1] << count;
            count = 1;
        }
    }

    cout << text[text.length() - 1] << to_string(count);

    return 0;
}

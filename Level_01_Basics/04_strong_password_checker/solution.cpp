#include <bits/stdc++.h>
using namespace std;

pair<bool, string> strongPasswordChecker(const string& password) {
    bool hasCapital = false;
    bool hasSpecial = false;
    bool hasNumber = false;
    bool hasAtLeastEight = password.length() >= 8;

    for (char c : password) {
        if (isupper(c)) {
            hasCapital = true;
        }

        if (isdigit(c)) {
            hasNumber = true;
        }

        if (!isalnum(c)) {
            hasSpecial = true;
        }
    }

    bool strongPassword = hasCapital && hasSpecial && hasNumber && hasAtLeastEight;

    string message;

    message += string("Capital letter: ") + (hasCapital ? "true\n" : "false\n");
    message += string("Special character: ") + (hasSpecial ? "true\n" : "false\n");
    message += string("At least eight characters: ") + (hasAtLeastEight ? "true\n" : "false\n");
    message += string("Number included: ") + (hasNumber ? "true\n" : "false\n");

    if (strongPassword) {
        message += "Password is strong!";
    } else {
        message += "Password is not strong...";
    }

    return {strongPassword, message};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string password;

    cout << "Input a password: " << endl;
    cin >> password;

    auto [result, message] = strongPasswordChecker(password);

    cout << message << endl;

    return 0;
}
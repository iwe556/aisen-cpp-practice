#include <bits/stdc++.h>
using namespace std;

pair<bool, string> strongPassowrdChecker(string password) {
    string message;
    bool strongPassword;

    unordered_map<string,bool> checkList = {
        {"CapitalLetter",false},
        {"SpecialCharacter",false},
        {"AtleastEightCharacters",false},
        {"NumberIncluded",false}
    };

    if (password.length() > 8) {
        checkList.at("AtleastEightCharacters") = true;
    }

    for (int i = 0; i < password.length(); i++) {
        if (!isalnum(password[i])) {
            checkList.at("SpecialCharacter") = true;
        }

        if (isdigit(password[i])) {
            checkList.at("NumberIncluded") = true;
        }

        if (isupper(password[i])) {
            checkList.at("CapitalLetter") = true;
        }
    }

    for (auto[requirement,status] : checkList) {
        if (status == false) {
            strongPassword = false;
            message = message + requirement + " is false \n";
        } else {
            strongPassword = true;
            message = message = message + requirement + " is true \n";
        }
    }

    if (strongPassword) {
        message = message + "Password is strong!";
    } else {
        message = message + "Password is not strong...";
    }
    
    return {strongPassword,message};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string password;

    cout << "Input a password: " << endl;
    cin >> password;

    auto[result, message] = strongPassowrdChecker(password);

    cout << message << endl;

    return 0;
}

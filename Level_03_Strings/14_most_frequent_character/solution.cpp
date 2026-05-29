#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string text;
    cin >> text;

    unordered_map<char,int> letterCount = {
        
    };

    for (int i = 0; i < text.length(); i++) {
        auto it = letterCount.find(text[i]);

        if (it != letterCount.end()) {
            letterCount[text[i]] = letterCount[text[i]] + 1;
        } else {
            letterCount.insert({text[i],1});
        }
    }

    auto maxIt = letterCount.begin();

    for (auto it = letterCount.begin(); it != letterCount.end(); it++) {
        if (it->second > maxIt->second) {
            maxIt = it;
        }
    }

    cout << "Most frequent character is: " << maxIt->first << " it occurs: " << maxIt->second << " time(s)";

    return 0;
}

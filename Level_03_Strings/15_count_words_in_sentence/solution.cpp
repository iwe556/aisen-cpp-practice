#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);

    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    cout << count << "\n";

    return 0;
}
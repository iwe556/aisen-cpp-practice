#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string sentence;
    getline(cin, sentence);

    sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());
    transform(sentence.begin(), sentence.end(), sentence.begin(), [](unsigned char c){ return std::tolower(c); });
    
    string reversedSentence(sentence.rbegin(),sentence.rend());

    if (sentence == reversedSentence) cout << "Is a palindrome!"; else cout << "Is not a palindrome...";

    return 0;
}

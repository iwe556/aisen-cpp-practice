#include <bits/stdc++.h>
using namespace std;

int divisibleByThreeOrFive(vector<int> numbers) {
    int counter = 0;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i]%3 == 0 or numbers[i]%5 == 0) {
            counter = counter + 1;
        }
    }

    return counter;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> input = {12,7,9,20,15};

    cout << divisibleByThreeOrFive(input) << " numbers are divisible by 3 or 5" << endl;
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

bool isConsonant(char c) {
    return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isEasyToPronounce(const string& s) {
    int consecutiveConsonants = 0;
    for (char c : s) {
        if (isConsonant(c)) {
            consecutiveConsonants++;
            if (consecutiveConsonants >= 4) {
                return false; // Found 4 or more consecutive consonants, so it's hard to pronounce
            }
        } else {
            consecutiveConsonants = 0; // Reset consecutive consonants count
        }
    }
    return true; // Less than 4 consecutive consonants, so it's easy to pronounce
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (isEasyToPronounce(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

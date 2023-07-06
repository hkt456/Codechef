#include <iostream>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;
        string s, t, u;
        cin >> s >> t >> u;

        string result;
        for (int i = 0; i < n; i++) {
            int diff = t[i] - s[i];
            if (diff < 0)
                diff += 26;

            int ascii = u[i] + diff;
            ascii = (ascii - 'a') % 26 + 'a';  

            result += static_cast<char>(ascii);
        }

        cout << result << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> freq(n + 2, 0);
        for (int x : a) {
            freq[x]++;
        }
        
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int mex = 0;
            while (true) {
                if (freq[mex] == 0) break;
                mex++;
            }
            
            if (mex > 0) {
                ans.push_back(mex);
                for (int x = 0; x < mex; x++) {
                    freq[x]--;
                }
            } else {
                for (int x = 0; x < accumulate(freq.begin(), freq.end(), 0); x++) {
                    ans.push_back(0);
                }
                break;
            }
        }
        
        cout << ans.size() << endl;
        for (int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}

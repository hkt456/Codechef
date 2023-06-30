#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> a(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        std::vector<int> moved, unmoved;
        for (int i = 0; i < n; i++) {
            if (i + k <= n - 1 || i >= k) {
                moved.push_back(a[i]);
            } else {
                unmoved.push_back(a[i]);
            }
        }

        std::sort(moved.begin(), moved.end());

        if (unmoved.empty()) {
            for (int i = 0; i < moved.size(); i++) {
                std::cout << moved[i] << " ";
            }
        } else {
            int k = moved.size();
            std::vector<int> ans;
            ans.reserve(k + unmoved.size());
            ans.insert(ans.end(), moved.begin(), moved.begin() + k / 2);
            ans.insert(ans.end(), unmoved.begin(), unmoved.end());
            ans.insert(ans.end(), moved.begin() + k / 2, moved.end());

            for (int i = 0; i < ans.size(); i++) {
                std::cout << ans[i] << " ";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}

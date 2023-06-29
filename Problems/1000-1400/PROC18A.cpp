#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> girls(N);
        int maxImpressed=0;
        for (int i = 0; i < N; i++) {
            cin >> girls[i];
        }
        for(int i=0;i<=N-K;i++){
            int impressed = 0;
            for(int j=i;j<i+K;j++){
                impressed = impressed+girls[j];
                maxImpressed = max(maxImpressed,impressed);
            }
            
        }
        cout<<maxImpressed<<endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int E = 0, K = 0, cnt = 0;
        cin >> E >> K;
        
        while(E != 0)
        {
            E = E / K;
            cnt++;
        }
        
        std::cout << cnt << std::endl;
    }
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_map<string, int> doners{
            {"A", 0},
            {"B", 0},
            {"AB", 0},
            {"O", 0}
        };
        vector<string> types;
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            string a;
            cin>>a;
            types.push_back(a);
        }
        for(int i=0; i<n; i++){
            if(types[i] == "A"){
                doners["A"]++;
            }
            else if(types[i] == "B"){
                doners["B"]++;
            }
            else if(types[i] == "AB"){
                doners["AB"]++;

            }
            else if(types[i] == "O"){
                doners["O"]++;
                doners["A"]++;
                doners["B"]++;
            }
        }
        if(doners["AB"]!=0){
            doners["AB"]+=doners["A"];
            doners["AB"]+=doners["B"];
            doners["AB"]+=doners["O"];
        }
        
        
        int ans = std::max({doners["A"], doners["B"], doners["AB"], doners["0"]});

        cout<<ans<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        stack<char> stk;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0; i<n; i++){
            if(stk.empty()){
                if(s[i]!=':') continue;
                else stk.push(':');
            }
            else{
                if(s[i]==')') stk.push(')');
                else if(s[i]=='('){
                    while(s[i]!=':') i++;
                    while(!stk.empty()) stk.pop();
                    stk.push(':');
                }
                else if(s[i]==':'){
                    if(stk.top()!=':') count++;a#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        stack<char> stk;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0; i<n; i++){
            if(stk.empty()){
                if(s[i]!=':') continue;
                else stk.push(':');
            }
            else{
                if(s[i]==')') stk.push(')');
                else if(s[i]=='('){
                    while(s[i]!=':' && i<n) i++;
                    while(!stk.empty()) stk.pop();
                    stk.push(':');
                }
                else if(s[i]==':'){
                    if(stk.top()!=':') count++;
                    while(!stk.empty()) stk.pop();
                    stk.push(':');
                }
            }
        }
        cout<<count<<endl;
    }
}
                    while(!stk.empty()) stk.pop();
                    stk.push(':');
                }
            }
        }
        cout<<count<<endl;
    }
}
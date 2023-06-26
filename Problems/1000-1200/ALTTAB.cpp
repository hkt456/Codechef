#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<string> check;
    stack<string> tabs;
    stack<string> holder;
    for(int i=0 ;i<n;++i){
        string s;
        cin>>s;
        if(i==0){
            tabs.push(s);
            continue;
        }
        auto pos = check.find(s);
        if(pos==check.end()){
            tabs.push(s);
            check.insert(s);
            continue;
        }
        if(pos!=check.end()){
            holder.push(s);
            while(tabs.top()!=s){
                string temp = tabs.top();
                tabs.pop();
                holder.push(temp);
            }
            tabs.pop();
            
            while(!holder.empty()){
                string temp= holder.top();
                holder.pop();
                tabs.push(temp);
            }
            continue;

        }
    }
    while(!tabs.empty()){
        string s=tabs.top();
        int len=s.size();
        cout<<s[len-2]<<s[len-1];
        tabs.pop();
    }
    return 0;
}
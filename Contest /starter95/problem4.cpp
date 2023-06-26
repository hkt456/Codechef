#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<string> arr;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        arr.insert(s);
    }
    set<string>::iterator it;
    for(it=arr.end(); it!=arr.begin(); it--){
        cout<<it[it.size()-2]<<it[it.size()-1];
    }
}
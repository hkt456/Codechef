#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,k,p;
        cin>>n>>x>>k>>p;
        if(k==n) p+=20;
        p+=10*min(k,x);
        k-=min(k,x);
        p+=5*k;
        cout<<p<<endl;
    }
}
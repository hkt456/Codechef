#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long arr[m];
        long long sum=0;
        long long total=n*(n+1)/2;
        for(int i=0; i<m; i++){
            long long a;
            cin>>a;
            sum+=a;
        }
        cout<<total-sum<<endl;
        

    }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr, arr+n);
        if(m-arr[n-1]<=k) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
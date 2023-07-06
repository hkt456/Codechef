#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0; i<3; i++) cin>>arr[i];
        sort(arr, arr+3);
        int sum1=arr[2]+arr[1];
        int arr1[3];
        for(int i=0; i<3; i++) cin>>arr1[i];
        // for(int i=0; i<3; i++) cout<<arr1[i];

        sort(arr1, arr1+3);
        int sum2=arr1[2]+arr1[1];
        if(sum1>sum2) cout<<"Alice"<<endl;
        else if(sum1==sum2) cout<<"Tie"<<endl;
        else cout<<"Bob"<<endl;
    }
}
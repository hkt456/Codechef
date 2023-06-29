#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=0; i<n-k; i++){
            int j=i+k;
            int current=INT_MAX;
            int index;
            while(j<n){
                if(current>arr[j]){
                    current=arr[j];
                    index=j;
                }
                j++;
            }
            if(arr[i]>arr[index]){
                int temp=arr[i];
                arr[i]=current;
                arr[index]=temp;
            }
        }
        for(int i=0; i<n; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}
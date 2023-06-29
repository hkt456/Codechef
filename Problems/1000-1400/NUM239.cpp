#include <bits/stdc++.h>
using namespace std;
#define maxN (int) 1e5+5
int main(){
    int arr[maxN];
    memset(arr, 0, sizeof(arr));
    for(int i=1; i<=maxN; i++){
        if(i%10==3||i%10==2||i%10==9) arr[i]=arr[i-1]+1;
        else arr[i]=arr[i-1];
    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<arr[r]-arr[l-1]<<endl;
    }
}
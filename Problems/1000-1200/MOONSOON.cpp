#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        int a[n], b[m];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<m; i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        int ans=0;
        for(int i=0; i<min(n,m); i++) ans+=min((1ll*a[i]),(1ll*b[i]*h));
        cout<<ans<<endl;
    }
}
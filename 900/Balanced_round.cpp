#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans=1;
        int maxsum=1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<=k){
                ans++;
            }else{
                ans=1;
            }
            maxsum=max(maxsum,ans);
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        else{
            cout<<n-maxsum<<endl;

    }
}
}
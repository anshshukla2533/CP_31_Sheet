#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        int ab=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if((arr[i]%2 ==0 && arr[i+1]%2==0)||(arr[i]&1 && arr[i+1]&1))ans++;
        }
        cout<<ans<<endl;

    }
}
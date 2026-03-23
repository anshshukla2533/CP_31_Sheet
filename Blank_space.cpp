#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxblank=0;
 
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
               
                ans++;
                
            }else{
               
                ans=0;
            }
            maxblank=max(maxblank,ans);
        }
        cout<<maxblank<<endl;
    }
}
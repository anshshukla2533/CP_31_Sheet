#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>arr(n+1),pref(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pref[i]=arr[i]+pref[i-1];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int totalsum=pref[n];
            int segmentsum=pref[r]-pref[l-1];
              int m=r-l+1;
            int sum=totalsum-segmentsum+(m*k);
           
          
          
            
            if(sum&1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}

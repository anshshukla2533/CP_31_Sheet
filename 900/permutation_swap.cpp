#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ans=abs(ar[0]-1);
    for(int i=1;i<n;i++){
        ans=__gcd(ans,abs(ar[i]-(i+1)));
    }
    cout<<ans<<endl;
    }
    return 0;
}
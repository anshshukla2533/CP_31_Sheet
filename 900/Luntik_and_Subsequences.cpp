#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t ;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int c1=0,c0=0;
        c1=count(arr.begin(),arr.end(),1);
        c0=count(arr.begin(),arr.end(),0);
        cout<<c1*(1ll<<c0)<<endl;
    }
    return 0;
}
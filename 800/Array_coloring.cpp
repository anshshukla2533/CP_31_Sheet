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
       int odd=0;
       int even=0;
       for(int i=0;i<n;i++){
        if(a[i]&1)odd++;
        else even++;
       }
       if(even==n)cout<<"YES"<<endl;
       else if(odd&1)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;

    }
}
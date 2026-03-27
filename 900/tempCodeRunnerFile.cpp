#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        int minsum=k*(k+1)/2;
        int maxsum=(n*(n+1)/2)-((n-k)*(n-k+1))/2;
        if(x>=minsum || x<=maxsum)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
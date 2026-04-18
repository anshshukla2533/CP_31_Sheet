#include<bits/stdc++.h>
using namespace std;
int  solve(string s,string target){
    int n=s.size();
    int j=target.size()-1;
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]==target[j]){
            j--;
            if(j<0)return cnt;
        }else{
            cnt++;
        }
    }
    return 1e8;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        
            int mini=min({solve(n,"00"),solve(n,"25"),solve(n,"50"),solve(n,"75")});
            cout<<mini<<endl;
        
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,te;
        cin>>s>>te;
        vector<int>fs(26,0);
        vector<int>ft2(26,0);
       
        for(int i=0;i<te.size();i++){
            ft2[te[i]-'A']++;

        }
        
        for(int i=s.size()-1;i>=0;i--){
            if(ft2[s[i]-'A']>0)ft2[s[i]-'A']--;
            else s[i]='.';
        }
        string temp="";
        for(auto it:s){
            if(it=='.')continue;
            else temp+=it;
        }
        if(temp==te)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
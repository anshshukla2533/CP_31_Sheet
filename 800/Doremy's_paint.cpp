#include<bits/stdc++.h>
using namespace std;  

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<long long,long long>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        if(mp.size()>=3)cout<<"NO"<<endl;
        else{
            int freq1=mp.begin()->second;
            int freq2=mp.rbegin()->second;
            if(freq1==freq2)cout<<"YES"<<endl;

            else if(n%2==1 && abs(freq1-freq2)==1)cout<<"YES"<<endl;

            else{
                cout<<"NO"<<endl;
            }
        }

    
    }
     return 0;
}
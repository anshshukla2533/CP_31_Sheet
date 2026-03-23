#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        if(arr[0]==arr[n-1]){
            cout<<"NO"<<endl;
            continue;
        }
        else{
        cout<<"YES"<<endl;
        vector<int>ans;
        ans.push_back(arr[0]);
        for(int i=n-1;i>=1;i--){
            ans.push_back(arr[i]);
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;


    } 
    }
}
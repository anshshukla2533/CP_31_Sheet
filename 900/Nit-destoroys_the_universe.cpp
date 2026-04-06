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
        int zero_count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)zero_count++;

        }
        int left=0;
        int right=n-1;
        while(arr[left]==0){
            left++;
        }
        while(arr[right]==0){
            right--;
        }
        bool segment=false;
        for(int i=left;i<right;i++){
            if(arr[i]==0)segment=true;
        }
        if(zero_count==n){
            cout<<0<<endl;
        }else if(segment){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
       
   

}
return 0;
}
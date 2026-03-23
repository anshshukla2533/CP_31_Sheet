#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n ;
        vector<int>arr(n,0);
        int two=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2)two++;
        }
        if(two&1){
            cout<<-1<<endl;
            continue;

        }
        int r=0;
        for(int k=0;k<n-1;k++){
             if(arr[k]==2)r++;
             if(two/2==r){
                cout<<k+1<<endl;
                break;
             }
        }


    }
}
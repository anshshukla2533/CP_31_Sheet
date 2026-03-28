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
        int total=0;
        for(auto it:arr){
            total^=it;
        }
        if(total==0){
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            if(n%2==0){
                cout<<2<<endl;
                cout<<1<<" "<<n<<endl;
                cout<<1<<" "<<n<<endl;
            }
            else{
                cout<<4<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n-1<<" "<<n<<endl;

            }

        }
    }
}
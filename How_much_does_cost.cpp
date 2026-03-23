#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        int found = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == k){
                found = 1;
                break;
            }
        }

        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        sort(arr.begin(), arr.end());

        int maxi=1,cnt=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                cnt++;
            }else{
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        maxi=max(maxi,cnt);

        int ans = 0;

        while(maxi < n){
            ans += 1;
            int take = min(maxi, n - maxi);
            ans += take;
            maxi += take;
        }

        cout<<ans<<endl;
    }
    return 0;
}
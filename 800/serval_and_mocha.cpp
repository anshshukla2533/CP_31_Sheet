#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int a;
        cin >> a;
        
        vector<int> arr(a);
        for(int i = 0; i < a; i++){
            cin >> arr[i];
        }

        bool yes = false;

        for(int i=0;i<a;i++){
            for(int j=i+1;j<a;j++){
                if(__gcd(arr[i],arr[j])<=2){
                    yes=true;
                    break;
                }
            }
        }

      
        if(yes) cout << "YES\n";
        else cout << "NO\n";
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        int ans = 1;   
        int curr = 1;  

        for(int i = 1; i < n; i++){
            if(str[i] == str[i-1]){
                curr++;
            } else {
                curr = 1;
            }
            ans = max(ans, curr);
        }

        cout << ans + 1 << endl;
    }
}
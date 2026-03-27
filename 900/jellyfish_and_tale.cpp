#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        long long maxitime = b;

        for(int i = 0; i < n; i++){
            maxitime += min(arr[i], a - 1);
        }

        cout << maxitime << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool sorted = true;
        long long min_gap = LLONG_MAX;

        for(int i=1;i<n;i++){
            if(a[i] < a[i-1]){
                sorted = false;
                break;
            }

            min_gap = min(min_gap, a[i] - a[i-1]);
        }

        if(!sorted){
            cout<<0<<endl;
        }
        else{
            cout<<(min_gap/2)+1<<endl;
        }
    }
}
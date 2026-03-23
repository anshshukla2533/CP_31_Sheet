#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long sx,sy,dx,dy;
        cin>>sx>>sy>>dx>>dy;

        if(dy < sy){
            cout<<-1<<endl;
            continue;
        }

        long long moves = dy - sy;
        sx += moves;

        if(dx > sx){
            cout<<-1<<endl;
        } else {
            cout<<moves + (sx - dx)<<endl;
        }
    }
}
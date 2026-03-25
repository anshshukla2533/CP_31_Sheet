#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq;
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;
        

          vector<pair<long long, long long>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };
        set<pair<long long ,long long>>kingpos,queenpos;

        for(int i=0;i<8;i++){{
            long long dx=moves[i].first;
            long long dy=moves[i].second;
            kingpos.insert({xk+dx,yk+dy});
        }
            
        }
        for(int i=0;i<8;i++){
              long long dx=moves[i].first;
            long long dy=moves[i].second;
                queenpos.insert({xq+dx,yq+dy});
            
        }
        int count=0;
        for(auto pos:kingpos){
            if(queenpos.count(pos)){
                count++;
            }
        }
      cout<<count<<endl;
    
        

    }
}
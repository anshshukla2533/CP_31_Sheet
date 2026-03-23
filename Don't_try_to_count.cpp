#include<bits/stdc++.h>
using namespace std;

bool check(string x, string s){
    return x.find(s) != string::npos;   
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int i = 0;

     
        if(check(x, s)){
            cout << 0 << endl;
            continue;
        }

        while(i < 5){
            x += x;   
            i++;

            if(check(x, s)){
                cout << i << endl;
                break;   
            }
        }

      
        if(!check(x, s)){
            cout << -1 << endl;
        }
    }
}
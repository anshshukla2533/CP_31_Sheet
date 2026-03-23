#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;   
    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long mini = a[0];

        vector<long long> b;
        vector<long long> c;

        for(int i = 0; i < n; i++){
            if(a[i] == mini)
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }

        if(c.size() == 0){
            cout << -1 << endl;
        }
        else{
            cout << b.size() << " " << c.size() << endl;

            for(auto it : b)
                cout << it << " ";
            cout << endl;

            for(auto it : c)
                cout << it << " ";
            cout << endl;
        }
    }
}
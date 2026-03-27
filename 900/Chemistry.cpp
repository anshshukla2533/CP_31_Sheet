#include<bits/stdc++.h>
using namespace std;

/*
here we will use the fact that for the palindrome we can only have at most one element having odd frequnce  so here if k is greater then or qual odd-1 then it will work
*/

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);

        for(char c : s){
            freq[c - 'a']++;
        }

        int odd = 0;
        for(int i = 0; i < 26; i++){
            if(freq[i] % 2) odd++;
        }

        if(k >= odd - 1) cout << "YES\n";
        else cout << "NO\n";
    }
}
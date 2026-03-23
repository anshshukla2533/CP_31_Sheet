#include<bits/stdc++.h> 
using namespace std;

int main(){
    
        int n;
        cin>>n;
        vector<int>array(n);
        bool pos=false;
        int times=0;
        for(int i=0;i<n;i++){
            cin>>array[i];
            array[i]=abs(array[i]);
        }
       
       auto mini=*min_element(array.begin(), array.end());
       cout<<mini<<endl;



    
}
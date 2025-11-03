#include <bits/stdc++.h> 
#include <vector>
int main{}

vector < int > termsOfAP(int x) {
    // Write your code here.
    vector<int>ans;
    int t;
    cin>>t;
    while(t--){
        int z;
        cin>>z;
        ans.push_back(z);
        for(int i=2;i<x;i++){
            int res=3*i+2;
            if(res%4!=0){
                ans.push_back(res);
            }

        }
    }
}

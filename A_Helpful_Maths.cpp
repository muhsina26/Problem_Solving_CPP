#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string x;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]!='+'){
            x+=s[i];
        }
    }
    sort(x.begin(),x.end());
    for(int i=0;i<x.size();i++){
        if(i==x.size()-1){
            cout<<x[i];break;
        }
        cout<<x[i] <<"+";
    }

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
       int leftsum=0;
       int rightsum=0;
        for(int i=0;i<3;i++){
            leftsum+=s[i]-'0';

        }
        for(int i=3;i<6;i++){
            rightsum+=s[i]-'0';
        }
        if(leftsum==rightsum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.length()>10){
            char first=s[0];
            char last=s[s.length()-1];
            cout<<first<<s.length()-2<<last<<endl;
            
           
        }
        else{
            cout<<s<<endl;
        }
       

    }



}
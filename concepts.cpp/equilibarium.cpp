#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={-7,1,5,2,-4,3,0};
    int n=arr.size();
    vector<int>pref(n,0);
    vector<int>suff(n,0);

    pref[0]=arr[0];
    suff[n-1]=arr[n-1];

    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+arr[i];

    }
    for(int i=n-2;i>=0;i--){
       suff[i]=suff[i+1]+arr[i];
        
    }

    for(int i=0;i<n;i++){
        if(pref[i]==suff[i]){
            cout<<i+1<<endl;
            return 0;
        }
        else{
            return -1;
        }
    }

}
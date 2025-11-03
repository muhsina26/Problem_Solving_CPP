#include<bits/stdc++.h>
using namespace std;
int main(){
    int shops; //n
    cin>>shops;
    int prices[shops]; //prices
    for(int i=0;i<shops;i++){
        cin>>prices[i];
    }
   
    
    
    sort(prices,prices+shops);

    
   int q;
   cin>>q;
   while(q--){
        int m;
        cin>>m; //target
        int l=0;
        int r=shops-1;
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(prices[mid]<=m){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans+1<<endl; 
   }
        
        
        
    }
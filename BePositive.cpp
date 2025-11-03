#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int zerocount=0;
        int minusonecount=0;
        int operation;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                zerocount++;
            }
            else if(arr[i]==-1){
                minusonecount++;
            }

        }
        if(minusonecount%2==1){
             operation=zerocount+2;
        }
        else{
            operation=zerocount;
        }
        cout<<operation<<endl;
       
       
        
    }
}
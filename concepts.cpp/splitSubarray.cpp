#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5};
    int total_sum=0;
    int prefixSum[6];
    prefixSum[0]=arr[0];
    int index=-1;
    for(int i=0;i<6;i++){
        total_sum+=arr[i];
    }

    for(int i=1;i<6;i++){
        prefixSum[i]=prefixSum[i-1]+arr[i];

    }
    for(int i=0;i<5;i++){
        if(prefixSum[i]==total_sum-prefixSum[i]){
            index=i;
            break;
        }

    }
    for(int i=0;i<=index;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=index+1;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
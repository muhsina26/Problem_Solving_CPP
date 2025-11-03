#include<bits/stdc++.h>
using namespace std;
int binary(int arr[], int n, bool first, int target); // forward declaration


int main(){
    int arr[]={5,7,7,8,8,10};
    int n=6;
    int target=20;
   
   
    vector<int>ans;

    ans.push_back(binary(arr,n,true,target));
    ans.push_back(binary(arr,n,false,target));
   
   cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;


   

}

int binary(int arr[], int n, bool first, int target){
     int low=0;
    int high=n-1;
   int  ans=-1;

    while(low<=high){

        int mid = low + (high - low) / 2;
        if(arr[mid]==target){
            ans=mid;
            if(first){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
      
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return ans;
}
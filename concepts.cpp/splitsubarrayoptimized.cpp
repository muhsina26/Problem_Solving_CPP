#include<bits/stdc++.h>
using namespace std;
int main(){
 int leftsum=0;
 int index=0;
    int arr[]={1,2,3,4,5,5};
    for(int i=0;i<6;i++){
       
        int rightsum=0;
        leftsum+=arr[i];

        for(int j=i+1;j<6;j++){
            rightsum+=arr[j];
        }

        if(leftsum==rightsum){
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
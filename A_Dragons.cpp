#include<bits/stdc++.h>
using namespace std;
int main(){
    int strength,n;
     
    cin>>strength>>n;
    

        vector<pair<int,int>>dragons;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            dragons.push_back({x,y});
        }

        sort(dragons.begin(),dragons.end());

        for(auto d: dragons){
            int dragonStrength=d.first,bonous=d.second;
            if(strength <= dragonStrength){
    cout << "NO" << endl;
    return 0;
}

            else{
                strength+=bonous;
               
            }
        }
        cout<<"YES"<<endl;
    } 

   
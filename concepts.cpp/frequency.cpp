#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>countFreq(vector<int>&arr){
    unordered_map<int,int> mp;
    vector<vector<int>>ans;

    for(int num:arr){
        mp[num]++;
    }

    for(auto &it:mp){
        ans.push_back({it.first,it.second});
    }
    return ans;
    





}
int main()
{
    vector<int>arr={10,20,10,5,20};
    vector<vector<int>>ans=countFreq(arr);

     sort(ans.begin(), ans.end(), [](vector<int>& a, 
                        vector<int>& b) {
        return a[0] < b[0];  
    });

    for(auto &x:ans){
        cout << x[0] << " " << x[1] << endl;
    }

}

// There are cases where you can skip sorting:

// If you don’t care about order (e.g. just need the counts)

// If performance matters (sorting adds O(n log n) time)

// If you use map instead of unordered_map — because map automatically keeps keys sorted
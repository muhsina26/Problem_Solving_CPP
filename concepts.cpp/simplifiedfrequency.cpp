#include <bits/stdc++.h>
using namespace std;

void countFreq(vector<int>& arr) {
    unordered_map<int,int> mp;
    //eikhn a map<int,int>mp use korle sorted ans pawa jabe

    // count frequency
    for (int num : arr) {
        mp[num]++;
    }

    // print directly
    for (auto &it : mp) {
        cout << it.first << " " << it.second << endl;
    }
}

int main() {
    vector<int> arr = {10, 20, 10, 5, 20};
    countFreq(arr);
}

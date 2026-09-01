#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int size;
    cout <<"Size:";
    cin >> size;
    while(size--){
        int temp;
        cin >> temp;
        a.emplace_back(temp);
    }
    unordered_map<int,int> mp;
    int target =0;
    for (int i =0;i<a.size();i++){
        if(mp.find(target)!=mp.end()){
            mp[target]++;
        }
        mp[a[i]]=i;
    }
    
    

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    unordered_map<int,int> mp;
    int size;cout<<"Size:";cin>>size;
    while(size--){
        int temp;
        cin>>temp;
        a.emplace_back(temp);
    }

    int target ;cout<<"Target:";cin>>target;

    for(int i=0;i<a.size();i++){
        int actual = target-a[i];
        if(mp.find(actual)!=mp.end()){
            cout << mp[actual]<<" "<<i<<endl;
        }
        mp[a[i]]=i;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int temp;
    int size;cout<<"size:";cin>>size;
    for(int i=0;i<size;i++){
        cin>>temp;
        a.emplace_back(temp);
    }
    unordered_map<int,int> mp;
    
    int target;
    cout<<"Target:";
    cin>>target;
    
    for(int i=0;i<size;i++){
        int needed = target - a[i];
        if(mp.find(needed)!=mp.end()){
            cout<<mp[needed]<<" "<<i<<endl;
        }
        mp[a[i]]=i;
    }

}
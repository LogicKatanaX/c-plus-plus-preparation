#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    int size;
    cout<<"size"; cin>>size;
    while(size--){
        int temp;
        cin>>temp;
        a.emplace_back(temp);
    }
    unordered_map<int,int> mp;
    int k;
    cout<<"K:";cin>>k;
    for(int i=0;i<a.size();i++){
        int element =a[i];
        if(mp.find(element)!=mp.end()){
            if(i-mp[element]<=k){
                cout<<"True\t";
             return 0;   
            }
        }
        mp[a[i]]=i;
    }
    cout<<"false";
    return 0;

}
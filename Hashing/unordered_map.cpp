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
    for(int x:a){
        mp[x]++;
    }

    int q;
    cout<<"Choice:";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter Number:";
        cin>>number;
        cout<<"Occurance "<<mp[number]<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    vector<int> b;
    int temp=0;
    string largest="";
    int size;cout<<"Size:";cin>>size;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Elements:";cin>>temp;
        a.emplace_back(temp);
    }
    // sort(a.begin(),a.end(),greater<int>());
    // for(int i=0;i<size;i++){
    //     cout<<a[i];
    // }

    for(int i=0;i<size;i++){
        largest+=to_string(a[i]);
    }
    cout<< largest;
}
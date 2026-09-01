#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    int n,temp;
    cout<<"N:";cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.emplace_back(temp);
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]+=1;
    }
    int k;
    cout<<"k";cin>>k;
    
    

}
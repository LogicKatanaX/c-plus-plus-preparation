#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Size=";cin>>size;
    vector<int>  f(size+1);
    f[0]=0;
    f[1]=1;
    cout<<f[0]<<" "<<f[1]<<" ";
    for(int i=2;i<size;i++){
        f[i]=f[i-1]+f[i-2];
        cout<<f[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
int sum =0;
void f(int n,int sum){
    if(n<1){
        cout<<sum;
        return;
    } 
    f(n-1,sum+n);
}

int main(){
    int n;
    cout<<"N:";cin>>n;
    f(n,sum);
}
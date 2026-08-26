#include<bits/stdc++.h>
using namespace std;
int i =1;
void f(int i,int n){
    if(i<0) return;
    cout<<i<<"\n";
    f(i-1,n);
}

int main(){
    int n;
    cout<<"N:";cin>>n;
    f(n,n);
}
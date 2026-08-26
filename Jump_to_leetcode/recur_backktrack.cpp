#include<bits/stdc++.h>
using namespace std;
int i =1;
void f(int i,int n){
    if(i<1) return;
    f(i-1,n);
    cout<<i<<"\n";
}

int main(){
    int n;
    cout<<"N:";cin>>n;
    f(n,n);
}
#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
        vector<int> f(n+1);
        f[0]=0;
        f[1]=1;
        if(n<=1){
            return n;
        }
        else{
            return f[n-1]+f[n-2];
        }
    }

int main(){
    int n;
    cout<<"Size=";cin>>n;
    vector<int>  f(n+1);
    cout<<fib(n);
}
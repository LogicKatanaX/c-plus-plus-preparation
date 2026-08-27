#include<bits/stdc++.h>
using namespace std;

int fibo(int size){
    

    if(size<=1){
        return size;
    }

    return fibo(size-1)+fibo(size-2);


}

int main(){
    int n;
    cout<<"Size=";cin>>n;
    vector<int>  f(n+1);
    fibo(n);
}
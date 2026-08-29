// bruteforce method
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[50];
    int size;
    cout<<"Size:";cin>>size;
    cout<<"Enter Element:";
    for (int i=0;i<size;i++){
        cin>>a[i];
    }
    int element;
    cout<<"Element:";cin>>element;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((a[i]+a[j])==element){
                cout<<"["<<i<<","<<j<<"]";
                cout<<"\n";
            }
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Rows:";cin>>size;
    for(int i=size-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

}
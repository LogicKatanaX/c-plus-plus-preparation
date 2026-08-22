#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"Number:";cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*rows-2*i-2;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int i=1;i<rows;i++){
        for(int j=0;j<rows-i;j++){
            cout<<"* ";
        }
        for(int j=1;j<2*i+1;j++){
            cout<<"  ";
        }
        for(int j=0;j<rows-i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Rows:";cin>>size;
    for(int i=0;i<size;i++){
        for(int j =0;j<size-i-1;j++){
            cout<<"  ";    
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        for(int j =0;j<size-i-1;j++){
            cout<<"  ";    
        }
        cout <<"\n";
    }
    for(int i=0;i<size;i++){
        for(int j =0;j<i;j++){
            cout<<"  ";    
        }
        for(int j=0;j<(2*size)-(2*i+1);j++){
            cout<<"* ";
        }
        for(int j =0;j<i;j++){
            cout<<"  ";    
        }
        cout <<"\n";
    }
    

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout <<"Size:"; cin>>size;
    for (int i =0;i<size;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout <<"\n";
    }
    for(int i=0;i<size-1;i++){
        for(int j=0;j<(size-1)-i;j++){
           cout<<"* "; 
        }
        cout <<"\n";
    }
}
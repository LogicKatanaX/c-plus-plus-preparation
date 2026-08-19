#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the Rows:";cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        
        for(int j=1;j<=2*(rows-i);j++){
                cout<<"  ";
            }
        
            for(int j=i;j>0;j--){
                cout<<j<<" ";
            }
            
        
       cout<<"\n";
    }
}


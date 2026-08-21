#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"Rows:";cin>>rows;
    
    for(int i =0;i<rows;i++){
        char ch='A';
        for(int j =0;j<rows-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<ch<<" ";
            if(j<i){
                
                ch++;
            }
            else{
                ch--;
            }
        }
        for(int j =0;j<rows-i-1;j++){
            cout<<"  ";
        }
        cout<<"\n";
    }
}
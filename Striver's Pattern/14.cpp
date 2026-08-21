#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"rows:";cin>>rows;
   
    for(int i=0;i<rows;i++){
        char ch='A';
        for(int j =0;j<rows-i;j++){
            cout<< ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}
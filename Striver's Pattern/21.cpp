#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"Rows:";cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(i==0 || i== rows-1){
                cout<<"* ";
            }
            else if(j==0 || j==rows-1){
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
            
        }
        cout<<"\n";
    }
}
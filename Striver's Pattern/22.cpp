#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"Rows:";cin>>rows;
    for(int i=0;i<2*rows-1;i++){
        for(int j =0;j<2*rows-1;j++){
            int top=i;
            int left=j;
            int bottom = (2*rows -2)-i;
            int right = (2*rows -2)-j;
            int layer = min(min(top,bottom),min(left,right));
            cout << rows-layer<<" ";
        }
        cout<<"\n";
    }
}
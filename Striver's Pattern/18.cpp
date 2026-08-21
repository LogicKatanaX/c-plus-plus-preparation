#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout <<"Rows:";cin>>rows;
    char ch ='A';
    for(int i =1;i<rows;i++){
        ch++;
    }
    for(int i=0;i<rows;i++){
        char temp=ch;
        for(int j =0;j<=i;j++){

            cout<<temp;
            temp++;
        }
        ch--;
        cout<<"\n";
    }
}
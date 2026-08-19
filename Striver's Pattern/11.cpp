#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows ;
    int count=0;
    cout <<"Rows:";cin>>rows;
    for(int i=1;i<=rows;i++){
        count =1;
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                if(count==1){
                    cout <<"1 ";
                    count++;
                }
                else if(count %2==0){
                    cout<<"0 ";
                    count++;
                }
                else{
                    cout <<"1 ";
                    count++;
                }
            }
        }
        else if(i%2==0){
            count =1;
            for(int j=1;j<=i;j++){
                if(count==0){
                    cout <<"0 ";
                    count++;
                }
                else if(count %2==0){
                    cout<<"1 ";
                    count++;
                }
                else{
                    cout <<"0 ";
                    count++;
                }
            }
        }
        cout <<"\n";
    }

}
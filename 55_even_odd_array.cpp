#include<iostream>
using namespace std;
int main(){
    int n,ecount=0,ocount=0;
    cout <<"Enter the Number :";cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the number :";cin>>a[i];

    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            ecount =ecount +1;
        }
        else{
            ocount =ocount +1;
        }
    }
    cout << "The Number of Odds :"<<ocount<<"\n";
    cout<<"The Number of Evens:"<<ecount;
    
}
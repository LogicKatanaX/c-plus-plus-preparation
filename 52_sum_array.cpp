#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout <<"Enter the Number :";cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the number :";cin>>a[i];
        
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<< "The Sum of Array Elements:"<<sum;
}
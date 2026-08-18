#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter How many numbers you wanna insert:"; cin>> n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the number :";cin>>a[i];
        
    }
    for(int i=0;i<n;i++){
        cout << a[i]<<" ";
    }
}
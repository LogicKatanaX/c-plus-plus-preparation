#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the Number :";cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the number :";cin>>a[i];
        
    }
    int min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
        
    }
    cout<< "The Min of Array Elements:"<<min;
}
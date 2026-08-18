#include<iostream>
using namespace std;
int main(){
    double arr[50];
    double temp=0;
    int size;
    cout<<"Size=";cin>>size;
    for(int i=0;i<size;i++){
        cout <<"Elements:";cin>>temp;
        arr[i]=temp;
    }
    int k;
    
    cout << "Enter the number of rotation: ";cin>>k;
    k=k%size;
    for(int j =0;j<k;j++){
        temp=arr[size-1];
        for(int i=size-2; i>=0;i--){
            
            arr[i+1]=arr[i];
            
        }
        arr[0]=temp;
    }
    for(int i=0;i<size;i++){
        cout << arr[i]<<" ";
    }
}
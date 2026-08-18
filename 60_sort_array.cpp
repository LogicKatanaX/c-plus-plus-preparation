#include<iostream>
using namespace std;
int main(){
    double arr[50];
    int size;
    double temp=0;
    cout <<"Size:";cin>> size;
    for(int i =0;i<size;i++){
        cout<<"Enter ELements:";cin>>temp;
        arr[i]=temp;

    }
    for(int i=0;i<size-1;i++){
        for (int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    cout <<"Sorted Array is =";
    for (int i=0;i<size;i++){
        cout <<arr[i]<<" ";
    }
}
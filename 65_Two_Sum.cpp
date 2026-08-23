#include<iostream>
using namespace std;

void finde(int arr[],int element,int size){
    int start=0;
    int end=size-1;
    while(start<end){
        if(element==arr[start]+arr[end]){
            cout <<arr[start]<<" ";
            cout <<arr[end]<<"\n";
            start++;
            end--;
        }
        else if(element>arr[start]+arr[end]){
            start++;
        }
        else{
            end--;
        }
    }
}

int main(){
int n, arr[50],size,element;
cout<<"Size :";cin>>size;
for(int i=0;i<size;i++){
    cout<<"Enter the elements:";cin>>arr[i];
}
for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++){
        if (arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
}
cout<<"Element :";cin>>element;
finde(arr,element,size);
}
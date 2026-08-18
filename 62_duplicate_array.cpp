#include<iostream>
using namespace std;
int main(){
    int size;
    double arr[50],temp;
    cout <<"Size:";cin>>size;
    for(int i=0;i<size;i++){
        cout <<"Enter the elements:";cin>>temp;
        arr[i]=temp;
    }
    int count =0;
    for(int i=0;i<size-1;i++){
        for(int j = i+1;j<size;j++){
            if (arr[i]>arr[j]){
                swap(arr[i],arr[j]);

            }
        }
    }
    cout<< "Duplicate Elements are:\n" ;
    for(int i=0;i<size-1;i++){
        int count =1;
        while(i<size-1&&arr[i]==arr[i+1]){
            count++;
            i++;
        }
        if(count >1){
            cout << arr[i]<<" is there about "<<count<<" times "<<"\n";
        }
    }    
}
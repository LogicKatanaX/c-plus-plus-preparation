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

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
    for(int i=0;i<size;i++){
        int count =1;
        if(i < size-1 && arr[i] == arr[i+1]){
            while(i<size-1&&arr[i]==arr[i+1]){
                count ++;
                i++;
            }
            cout << arr[i]<<"-->"<<count<<"\n";
        }
        else{
            cout <<arr[i]<<"--->"<<count <<"\n";
        }
    }
}
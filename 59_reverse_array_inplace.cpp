#include<iostream>
using namespace std;
int main(){
    double arr[50];
    int size;
    double temp;
    cout <<"Size:";cin >> size;
    for (int i =0;i<size;i++){
        cout <<"Enter elements:";cin >> temp;
        arr[i]=temp;
    }
    int start = 0;
    int end =size-1;
    
    while(start <end ){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
    cout << "The reverse Elements are :";
    for (int i =0;i<size;i++){
        cout << arr[i]<<" ";
    }


}
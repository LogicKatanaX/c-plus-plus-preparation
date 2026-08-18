//second largest element
#include<iostream>
using namespace std;
int main(){
    int size;
    double temp;
    double array[50];
    cout <<"Size:";cin>>size;
    // enter the elements into the array
    for (int i=0;i<size;i++){
        cout <<"Enter the Elements:";cin>>temp;
        array[i]=temp;   
    }

    for (int i=0;i<size-1;i++){
        for (int j=i+1;j<size;j++){
            if (array[i]>array[j]){
                swap(array[i],array[j]);
            }
            
        }
    }
    cout << "2nd Largest Element in the array is = "<< array [size-2];

}
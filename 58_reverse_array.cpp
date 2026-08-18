#include<iostream>
using namespace std;

void reverse(double a[],int size,double rev[]){
    
    int k=0;
    for(int i=size-1;i>=0;i--){
        rev[k]=a[i];
        k++;
    }
    
}

int main(){
    double a[50];
    double rev[50];
    double temp=0;
    double element ;
    int size;
    cout << "Enter the Number of elements You wanna insert into the Array:"; cin>> size;
    for (int i =0;i<size;i++){
        cout << "Enter the elements :";cin>>temp;
        a[i]=temp;
    }
    reverse(a,size,rev);
    
    cout << "The Reverse of the array : ";
    for (int j=0;j<size;j++){
        cout << rev[j];
        cout << " ";
    }
}
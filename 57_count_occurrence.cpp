#include<iostream>
using namespace std;

int count(double a[],int size,double element){
    int countn =0;
    for(int i=0;i<size;i++){
        if(element==a[i]){
            countn++;
        }
    }
    return countn;
}

int main(){
    double a[50];
    double temp=0;
    double element ;
    int size;
    cout << "Enter the Number of elements You wanna insert into the Array:"; cin>> size;
    for (int i =0;i<size;i++){
        cout << "Enter the elements :";cin>>temp;
        a[i]=temp;
    }
    cout << "You wanna count occurance of which element:"; cin >> element ;
    cout << "The Element Occurred: "<< element<<" occurance is =  "<<count(a,size,element)<< "times";

}
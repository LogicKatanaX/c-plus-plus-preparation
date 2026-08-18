#include<iostream>
using namespace std;

bool found(double a[], int n,double element){
    for (int i=0;i<n;i++){
        if(element ==a[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    double element ;
    cout << "Enter the Number of elements of the array:";cin >> n;
    
    double a[n];
    double temp =0;
    for(int i =0;i<n;i++){
        cout << "Enter the elements :";cin >> temp;
        a[i]=temp;
        
    }
    cout << "enter the element you wanna search:";cin >> element ;
    if(found(a,n,element)){
        cout << "Element Found"; 
    }
    else{
        cout << "Not Found"; 
    }
}
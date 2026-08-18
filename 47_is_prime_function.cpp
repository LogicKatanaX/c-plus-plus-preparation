#include<iostream>
#include <cstdlib>
using namespace std;
bool isPrime(int a){
     for(int i=2;i<a-1;i++){
        if(a%i==0){
            return false;
        }
        
     }
     return true;
}

int main(){
    int a;
    cout <<"Enter the number ="; cin >> a;
    if (a<=1){
        cout<< "Please give number greater than 1";
        exit(0);
    }

    if (isPrime(a)){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not Prime Number";
    }
}
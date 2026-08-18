#include<iostream>
using namespace std;
bool isEven(int a){
    if (a%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a ;
    cout<<"Enter the 1st number :"; cin >> a;
    if(isEven(a)){
     cout <<"Even"; 
    }
    else{
        cout<<"Odd";
    }
   
}
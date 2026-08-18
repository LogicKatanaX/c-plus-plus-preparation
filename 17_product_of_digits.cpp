#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    int temp;
    cout<<"Enter the number =";cin>>n;
    
    int prod=1;
    while(n>0){
        temp = n%10;
        // armstrong = armstrong + pow(temp,3);
        prod = prod * temp;
        n=n/10;
    }
   
        cout<<"Prod of Digits="<< prod;
    
}
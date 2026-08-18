#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    int temp;
    cout<<"Enter the number =";cin>>n;
    
    int sum=0;
    while(n>0){
        temp = n%10;
        // armstrong = armstrong + pow(temp,3);
        sum = sum + temp;
        n=n/10;
    }
   
        cout<<"Sum of Digits="<< sum;
    
}
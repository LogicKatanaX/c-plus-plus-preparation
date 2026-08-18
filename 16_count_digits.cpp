#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    int temp;
    int count=0;
    cout<<"Enter the number =";cin>>n;
    
    int sum=0;
    while(n>0){
        temp = n%10;
        // armstrong = armstrong + pow(temp,3);
        count = count + 1;
        n=n/10;
    }
   
        cout<<"Count of Digits="<< count;
    
}
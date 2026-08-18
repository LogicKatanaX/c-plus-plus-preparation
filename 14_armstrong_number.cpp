#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    int temp;
    cout<<"Enter the number =";cin>>n;
    int act=n;
    int armstrong=0;
    while(n>0){
        temp = n%10;
        // armstrong = armstrong + pow(temp,3);
        armstrong = armstrong + (temp*temp*temp);
        n=n/10;
        temp =0;
    }
    if(act==armstrong){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }
}
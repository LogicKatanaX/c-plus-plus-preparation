#include<iostream>
using namespace std;
int count(int a){
    int count=0;
    while(a>0){
        
        count=count +1;
        a=a/10;
    }
    return count;
}
int main(){
    int n;
    int temp=0;
    cout << "Enter the number =" ; cin>>n;
    int act = n;
    int square=n*n;
    int automor=0;
    int a = count(n);
    int place = 1;
    while(a>0){
        temp=square%10;
        automor=automor+temp*place;
        place =place *10;
        square=square/10;
        a=a-1;
    }
    if(act == automor){
        cout<<" Automorphic Number ";
    }
    else{
        cout << "Not Automorphic Number ";
    }
}
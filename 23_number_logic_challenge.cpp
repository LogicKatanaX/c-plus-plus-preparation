#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the Number =";cin >> n;
    if (n>0){
        if(n%2==0){
            cout<<"Positive Even Number!";
        }
        else{
            cout<<"Positive Odd Number!";
        }
        
    }
    else if (n<0){
        if(n%2==0){
            cout<<"Negetive Even Number!";
        }
        else{
            cout<<"Negetive Odd Number!";
        }
    }
    else{
        cout<<"Number is Zero";
    }
}
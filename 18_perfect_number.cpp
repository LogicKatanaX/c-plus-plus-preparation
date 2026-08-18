#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout << "enter the number ="; cin >> n;
    int act=n;
    for (int i =1;i<n;i++){
        if(n%i==0){
            // cout <<i;
            sum = sum +i;
        }
    }
    if (act == sum){
        cout<<"Perfect Number ";
    }
    else{
        cout<<"Not a Perfect Number ";
    }
}
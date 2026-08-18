#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter Your attendence:"; cin >> n;
    if (n>=75){
        cout<< "allowed for the exam !";
    }
    else{
        cout << "Not allowed for the exam !";
    }
}
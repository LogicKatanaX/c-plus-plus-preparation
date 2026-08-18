#include<iostream>
#include <cstdlib>
using namespace std;
int fact(int a){
    int factorial=1;
    for (int i=1;i<=a;i++){
        factorial = factorial*i;
    }
    return factorial;
}

int main(){
    int a;
    cout <<"Enter the number ="; cin >> a;
    if (a<=1){
        cout<< "Please give number greater than 1";
        exit(0);
    }

    cout << "Factorial of a Number:"<<fact(a);
}
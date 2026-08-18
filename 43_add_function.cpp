#include<iostream>
using namespace std ;
double add(double a , double b ){
    return a+b;
}
int main(){
    double a,b ;
    cout <<"Enter the first number :"; cin >> a;
    cout <<"Enter the Second  number :"; cin >> b;
    cout << "The Addition of the number is :"<<  add(a,b);
}
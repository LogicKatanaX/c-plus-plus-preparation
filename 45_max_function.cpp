#include<iostream>
using namespace std;
double max(double a , double b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    double a , b;
    cout<<"Enter the 1st number :"; cin >> a;
    cout<<"Enter the 2nd number :"; cin >> b;
    cout <<"The Max is ="<<max(a,b);
}
#include<iostream>
using namespace std;
double square(double a){
    return a*a;
}
int main(){
    double a;
    cout<< "Enter the number:";cin>> a;
    cout<<"The Square of the number :"<<square(a);
}
#include <iostream>
using namespace std ;
int main (){
    int number ;
    cout << "Welcome to Multiplication table : \n Choose Your Desired Number : ";cin >> number ;
    for (int i= 1 ;i<=10 ; i++){
        cout << number << " x " << i << "=" << number*i << "\n";
    }
}
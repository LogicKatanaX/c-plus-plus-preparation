#include<iostream>
using namespace std;
int main(){
    int number ;
    int fact =1 ;
    cout << "Enter the number of the Factorial:";cin >> number ;
    for (int i = 1 ; i<=number ; i++){
        fact = fact * i ;
    }
    cout << " The Factorial is ="<< fact ;
}
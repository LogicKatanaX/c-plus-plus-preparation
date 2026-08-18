#include <iostream>
#include <cmath>
using namespace std ;
int main (){
    int number ;
    int sum=0;
    cout << "Enter the number you want to get square of sum:";cin>>number ;
    for (int i=1 ;i <= number ; i++){
        sum = sum + pow(i,2);
    }
    cout << sum;
}
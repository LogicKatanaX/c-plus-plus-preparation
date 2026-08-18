#include <iostream>
using namespace std;
int main(){
    int number;
    int countEven = 0;
    int countOdd= 0;
    cout << "Enter the number for all and even number of sum :";cin>> number ;
    for (int i =0;i<=number ; i++){
        if (i%2==0){
            countEven = countEven + i;
        }
        else{
            countOdd = countOdd+i;
        }
    }
    cout << "The Even Sum :"<< countEven <<"\n";
    cout << "The Even Odd :"<< countOdd ;
}
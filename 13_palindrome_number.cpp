#include<iostream>
using namespace std;
int main(){
    int n;
    
    int temp;
    cout << "Enter the Number ="; cin >> n;
    int actualsequence = n;
    int reverse =0;
    
    while(n>0){
        temp = n%10;
        reverse = (reverse*10) + temp;
        n=n/10;
        temp = 0;
    }
    
   if(actualsequence==reverse){
    cout<< "Palindrome Number!";
   }
   else{
        cout<< "Not Palindrome Number!";
   }
}
#include <iostream>
using namespace std;
int main(){
    int n;
    int even=0 ,odd = 0;
    cout << "Enter the number you wanna sum from 1 to n:"; cin >> n;
    for (int i=1 ; i<=n;i++){
       if (i%2 == 0){
            even = even +1; 
       }
       if (i%2 == 1){
            odd = odd +1; 
       }
        
    }
    cout << "Even :" << even << "\n";
    cout << "Odd :" << odd;
}
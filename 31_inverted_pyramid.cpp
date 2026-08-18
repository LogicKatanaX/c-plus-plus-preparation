#include<iostream>
using namespace std;
int main(){
    int n ;
    int j;
    cout << "Enter a Number :"; cin >> n;
    for(int i = n;i>=1;i--){
        j =0 ;
        while(j<n-i){
            cout <<" ";
            j++;
        }
        int k =1;
        while(k<=(2*i)-1){
            cout << "*";
            k++;
        }
        cout << "\n"; 
    }
}
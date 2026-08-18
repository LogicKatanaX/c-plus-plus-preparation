#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number :"; cin >> n;
    for(int i =n ; i>=1;i--){
        int j=0;
        while(j<=n-i){
            cout << "*";
            j++;
        }
        int k =1;
        while(k<(2*i)-1){
            cout << " ";
            k++;
        }
        j=0;
        while(j<=n-i){
            cout << "*";
            j++;
        }
        cout << "\n";
    }
    for(int i =1 ; i<=n-1;i++){
        int j=0;
        while(j<=(n-1)-i){
            cout << "*";
            j++;
        }
        int k =0;
        while(k<=(2*i)-1){
            cout << " ";
            k++;
        }
        j=0;
        while(j<=(n-1)-i){
            cout << "*";
            j++;
        }
        cout << "\n";
    }
}
#include<iostream>
using namespace std;
int main(){
    int n ;
    int j;
    cout << "Enter a Number :"; cin >> n;
    for(int i =1 ; i<=n;i++){
        j=1;
        while(j<=n-i){
            cout << " ";
            j++;
        }
        j=1;
        while(j<=i){
            cout <<"*";
            j++;
        }
        cout<<"\n";
    }
}
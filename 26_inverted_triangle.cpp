#include<iostream>
using namespace std;
int main(){
    int n ;
    int j;
    cout << "Enter the Number:";cin >> n;
    for (int i=n;i>0;i--){
        j=i;
        while(j>0){
            cout << "*";
            j--;
        }
        cout << "\n";
    }
}
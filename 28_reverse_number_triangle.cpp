#include<iostream>
using namespace std;
int main(){
    int n;
    int j =0;
    cout << "Enter the number of Rows:";cin >> n;
    for(int i =n;i>=1;i--){
        j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout << "\n";
    }
}
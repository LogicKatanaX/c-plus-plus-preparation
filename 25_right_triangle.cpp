#include<iostream>
using namespace std;
int main(){
    int n;
    int j =0;
    cout << "Enter the number of Rows:";cin >> n;
    for(int i =1;i<=n;i++){
        j = i;
        while(j>0){
            cout<<"*";
            j--;
        }
        cout << "\n";
    }
}
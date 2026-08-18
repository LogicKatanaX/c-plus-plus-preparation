#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number:";cin >>n;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n ){
            int j =1;
            while(j<=i){
                cout << "*";
                j++;
            }
        cout << "\n";
        }
        else{
            cout << "*";
            int k=1;
            while(k<i-1){
                cout<<" ";
                k++;
            }
            cout << "*";
            cout << "\n";
        }

    }
}
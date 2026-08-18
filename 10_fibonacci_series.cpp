#include<iostream>
using namespace std;
int main(){
    int a = 0;
    int b = 1;
    int c=0;
    int n;
    cout << "Enter the number:";cin>>n;
    if(n<=0){
        cout<<"Enter a positive number";

    }
    else if (n==1){
        cout << a ;
    }
    else{
        cout<< a <<"\n"<< b<<"\n";
        for(int i=2;i<n;i++){
        c=a+b;
        cout << c <<"\n";
        a=b;
        b=c;
        }
    

    }
}
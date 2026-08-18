#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i =1;i<=n;i++){
        factorial = factorial * i;
    }
    return factorial;

}
int main(){
    int n;
    cout<<"Enter the Number:";cin>>n;
    int act = n;
    int temp=0;
    int strong =0;
    while(n>0){
        temp=n%10;
        strong =strong+fact(temp); 
        n=n/10;
        temp=0;

    }
    if(strong==act){
        cout<< "Strong Number !";
    }
    else{
        cout << "Not a strong Number !";
    }
}
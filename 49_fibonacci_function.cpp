#include<iostream>
using namespace std;
// int fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     else if (n==1){
//         return 1;
//     }
//     else{
//         return (fibonacci(n-2) + fibonacci(n-1));
//     }
// }
int fibonacci(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    int a=0,b=1,c=0;
    for(int i =2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int a ;
    
    cout<<"Enter Your Number:";cin>>a;
    
         cout<<fibonacci(a)<<" ";
    
}
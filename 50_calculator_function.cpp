#include<iostream>
using namespace std;
double add(double x, double y){
    return x+y;
}
double sub(double x, double y){
    return x-y;
}
double multi(double x, double y){
    return x*y;
}
double div(double x, double y){
    return x/y;
}

int main(){
    int ch ;
    double x,y;
    cout <<"1.Add 2.Sub 3.Multi 4.Div Enter:";cin>>ch;
    switch(ch){
        case 1:
            cout << "Enter the X:";cin >>  x;
            cout << "Enter the Y:";cin >>  y;
            cout << add(x,y);
            break;
        case 2:
            cout << "Enter the X:";cin >>  x;
            cout << "Enter the Y:";cin >>  y;
            cout << sub(x,y);
            break;
        case 3:
             cout << "Enter the X:";cin >>  x;
            cout << "Enter the Y:";cin >>  y;
            cout << multi(x,y);
            break;
        case 4:
             cout << "Enter the X:";cin >>  x;
            cout << "Enter the Y:";cin >>  y;
            cout << div(x,y);
            break;
        default:
             cout << "Invalid!";
             break;
           
            
    }
    return 0;
}
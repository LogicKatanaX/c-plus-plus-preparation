#include <iostream>
#include <string>
using namespace std;

// Amra Python er moto ekta input() function toiri korlam
string input(string prompt) {
    string data;
    cout << prompt; // Aage print korlo
    cin >> data;    // Tarpor input nilo
    return data;    // Data ta pass kore dilo
}

int main() {
    // BOOM! Ekhon tui exact Python er moto code likhte parbi
    string Name = input("Enter your name: "); 
    
    cout << "Welcome to the Matrix, " << Name << endl;
    
    return 0;
}
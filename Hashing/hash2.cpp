#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> a; // FIX 1: Changed from vector<int> to vector<char> to match 'temp'
    int n; 
    char temp;
    cout << "N: "; cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        a.emplace_back(temp);
    }
    
    int hash[256] = {0};
    for(int i = 0; i < n; i++){
        hash[a[i]]++;
    }
    
    int q;
    cout << "Enter number of queries: "; cin >> q; // FIX 2: Separated queries from 'n'
    
    char c; // FIX 3: Renamed 'number' to 'c' to prevent brain-fog
    while(q--){ // FIX 4: Applied the Lightning Blade while(q--) loop!
        cout << "Enter character to find: "; cin >> c;
        cout << hash[c] << endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int size;
    cout <<"Size:";
    cin >> size;
    while(size--){
        int temp;
        cin >> temp;
        a.emplace_back(temp);
    }

    for(int i=0;i<a.size();i++){
        auto min_it=min_element(a.begin()+i,a.end());
        swap(a[i],*min_it);
    }
    cout <<"Sorted Array: \t";
    for(int x:a){
        cout<<x<<"\t";
    }
}
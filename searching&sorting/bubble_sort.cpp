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

    for(int i=a.size()-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
        
    }
    cout <<"Sorted Array: \t";
    for(int x:a){
        cout<<x<<"\t";
    }
}
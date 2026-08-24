#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int size,elements;
    cout<<"Size:";cin>>size;
    for(int i=0;i<size;i++){
        cout<<"ELememts:";cin>>elements;
        a.emplace_back(elements);
    }
    sort(a.begin(),a.end());
    int k;
    cout<<"K:";cin>>k;
    int target = a.size()-k;
    cout<<a[target];

}
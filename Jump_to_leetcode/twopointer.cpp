#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <pair<int,int>> a;
    int size,elements;
    cout<<"Size:";cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Elements:";cin>>elements;
        a.emplace_back(elements,i);
    }
    sort(a.begin(), a.end());
    int target;
    cout<<"Target=";cin>>target;
    int start=0,end=size-1;
    while(start<end){
        if((a[start].first)+(a[end].first)==target){
            cout<<"["<<a[start].second<<","<<a[end].second<<"]";
            break;
        }
        else if((a[start].first)+(a[end].first)<target){
            start++;
        }
        else{
            end--;
        }
        
    }
}
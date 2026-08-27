#include<bits/stdc++.h>
using namespace std;

vector<int> reverse1(vector<int>&a,int start,int end){

    if(start>end) return a;
    
    reverse1(a,start+1,end-1);
    swap(a[start],a[end]);
    return a;
}

int main(){
    int n; 
    int temp;
    vector<int>a;
    cout <<"Size=";cin>>n;
    
    cout <<"elements:\n";
    for(int i=0;i<n;i++){
        cin>>temp;
        a.emplace_back(temp);
    }
    int start =0;
    int end =a.size()-1;
    a = reverse1(a,start,end);
    for(int x:a){
        cout << x;
    }
    
    return 0;
}
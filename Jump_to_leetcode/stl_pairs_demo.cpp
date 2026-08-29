#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks,roll;
    int num;
    cout<<"Number of Students:";cin>>num;
    vector<pair<int,int>> a;
    for(int i=0;i<num;i++){
        cout<<" Roll Number of Students:";cin>>roll;
        cout<<" Marks of Students:";cin>>marks;
        a.emplace_back(roll,marks);

    }

    for(int i=0;i<num;i++){
        cout<<"Roll:"<<a[i].first<<"  Marks:"<<a[i].second;
        cout<<"\n";
    }
}

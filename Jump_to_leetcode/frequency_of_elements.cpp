#include<bits/stdc++.h>
using namespace std;
int maxFrequency(vector<int>& nums, int k) {
     sort(nums.begin(),nums.end());
     int i =0;
     int sum = accumulate(nums.begin(),nums.end(),0);
     int size = nums.size();
     int last =*(nums.end()-1);
     int cost = (size*last)-sum; 
     while(k>=0){
        
     }

}

int main(){
    int size;
    int temp;
    int k;
    cout<<"Size=";cin>>size;
    vector<int> nums;
    cout <<"Enter the elements:";
    for(int i=0;i<size;i++){
        cin>>temp;
        nums.emplace_back(temp);
    }
    cout <<"Enter the K:";
    cin>>k;


}
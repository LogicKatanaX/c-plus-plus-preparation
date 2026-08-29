// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<pair<int,int>> a;
//         for(int i=0;i<nums.size();i++){
//             a.emplace_back(nums[i],i);
//         }
//         sort(a.begin(),a.end());
//         int start=0;
//         int end=nums.size()-1;
//         while(start<end){
//             if(a[start].first+a[end].first==target){
//                 return{a[start].second,a[end].second};
//             }
//             else if(a[start].first+a[end].first<target){
//                 start++;
//             }
//             else{
//                 end--;
//             }
//         }
//         return {};
//     }
// };
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        int rev=0;
        if(x>=0){
            while(x>0){
            int temp=x%10;
            if (rev>INT_MAX/10 || rev < INT_MIN /10){
                return 0;
            }
            rev = ((rev)*10)+temp;
            x=x/10;
        }
        }
        else{
            return false;
        }
        
        return original == rev;  
    }
};
int main(){

}
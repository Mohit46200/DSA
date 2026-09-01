#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
 

 bool canJump(vector<int>& nums) {           //greedy approach 
        int num = 0;
        for(int i=0;i<nums.size();i++){
            if(i>num){
                return false;
            }
            if(i+nums[i]>num){
                num = i+nums[i];
            }
        }if(num>=nums.size()-1){
            return true;
        }
        return false;
}
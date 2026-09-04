#include <iostream> 
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {         //khadan's Algorithum
        int ans=0;
        int max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            ans = ans + nums[i];
            if(ans > max){
                max = ans;
            }
            if(ans<0){
                ans=0;
            }
        }
        return max;
    }
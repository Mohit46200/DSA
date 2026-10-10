 #include <iostream> 
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


 
 
 int subarraySum(vector<int>& nums, int k) {
        vector<int> sum ;
        int count = 0;
        sum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            sum.push_back(sum[i-1]+nums[i]);
        }
        unordered_map<int,int>m;
        int a;
        m[0] = 1;
        for(int i=0;i<nums.size();i++){
            a = sum[i] - k;
           if (m.find(a) != m.end()) {
                count += m[a];
            }
            m[sum[i]]++;
        }
        
        return count;
    }
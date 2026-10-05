#include <iostream> 
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

//same method for Problemb 287 find duplicates and prob 2965 Find Missing and Repeated Values


vector<int> twoSum(vector<int>& nums, int target) {    //O(n)
        unordered_map<int,int>m;
        vector<int>ans;
        for (int i=0;i<nums.size();i++){
            int first = nums[i];
            int second = target-first;
            if(m.find(second)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[second]);
            }
            m.insert({first,i});
        }
        return ans;
    }
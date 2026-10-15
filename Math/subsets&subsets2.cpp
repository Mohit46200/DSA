#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> subsets(vector<int>& nums) {              //subsets using backtracking
        vector<vector<int>> ans;
        ans.push_back({});
        for(int i=0;i<nums.size();i++){
            int n = ans.size();
            for(int j=0;j<n;j++){
                vector<int> temp = ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }

vector<vector<int>> subsetsWithDup(vector<int>& nums) {        //subsets 2 (repeating values)
    sort(nums.begin(), nums.end());                           // if one number is excluded the if that number
                                                               //exist again in nums then that should not be added 
    vector<vector<int>> ans;                                   //in that excluded subsets to avoid repeating subsets
    ans.push_back({});

    int start = 0, end = 0;

    for (int i = 0; i < nums.size(); i++) {
        int n = ans.size();
        start = 0;

        if (i > 0 && nums[i] == nums[i - 1]) {
            start = end + 1;
        }

        end = n - 1;

        for (int j = start; j < n; j++) {
            vector<int> temp = ans[j];
            temp.push_back(nums[i]);
            ans.push_back(temp);
        }
    }

    return ans;
}
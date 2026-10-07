#include <iostream> 
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;



vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    int pt1, pt2;

    for (int i = 0; i < nums.size(); i++) {

        // Skip duplicate first elements
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        pt1 = i + 1;
        pt2 = nums.size() - 1;

        while (pt1 < pt2) {

            int sum = nums[i] + nums[pt1] + nums[pt2];

            if (sum == 0) {
                ans.push_back({nums[i], nums[pt1], nums[pt2]});

                pt1++;
                pt2--;

                // Skip duplicates
                while (pt1 < pt2 && nums[pt1] == nums[pt1 - 1])
                    pt1++;

                }
            else if (sum < 0) {
                pt1++;
            }
            else {
                pt2--;
            }
        }
    }

    return ans;
}
#include <iostream> 
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

 
 
 set<vector<int>>s;
    void Csum(vector<vector<int>>& ans,int i,vector<int>& sum,vector<int>& candidates,int target){
        if(target==0){
            if(s.find(sum) == s.end()){
                ans.push_back(sum);
                s.insert(sum);
            }
            
            return;
        }
        if(target<0 || i==candidates.size()){
            return;
        }
        
        sum.push_back(candidates[i]);
        Csum(ans,i+1,sum,candidates,target-candidates[i]);
        Csum(ans,i,sum,candidates,target-candidates[i]);
        sum.pop_back();
        Csum(ans,i+1,sum,candidates,target);
    
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sum;
        int i=0;
        Csum(ans,i,sum,candidates,target);
        return ans;
    }
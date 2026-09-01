#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
 

vector<int> findPages(vector<int> &arr, int k) {
        vector<int> totalpages;
        int sum = 0;
        // if(arr.size()<k){
        //     return -1;
        // }
        for(int j=0;j<arr.size();j++){
            sum = 0;
            for(int i=j;i<j+(arr.size()-(k-1));i++){
                sum  = sum + arr[i];
                totalpages.push_back(sum);
            }
            
            if(j == k-1){
                break;
            }
        }
        int min = totalpages[0];
        for(int i=0;i<totalpages.size();i++){
            if(totalpages[i]<min){
                min = totalpages[i];
            }
        }
        return totalpages;
    }

int main() {
    vector<int> arr = {15,10,19,10,5,18,7};
    int k = 5;
    vector<int> ans = findPages(arr,k);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<"\t";
    }
}
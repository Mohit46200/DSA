#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {               //Brute force (0(n^2))
        int ans = 0;
        for(int i=prices.size()-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if(prices[i]-prices[j]>ans){
                    ans = prices[i]-prices[j];
                };
            }
        }
        return ans;
    }
int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices)<<"\n";
}
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


int maxProfit2(vector<int>& prices) {       //most optimal aproach
        int mp = 0;
        int bb = prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bb){
                mp = max(mp,prices[i]-bb);
            }
            bb = min(bb,prices[i]);
        }
        return mp;
    }

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices)<<"\n";
    cout<<maxProfit(prices)<<"\n";
}